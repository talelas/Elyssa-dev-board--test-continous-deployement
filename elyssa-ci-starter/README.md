# Elyssa board CI/CD starter

Drop this into your `Elyssa-dev-board` repo. Three workflows, two scripts.

## The core idea

Your `packages` JSON has two very different kinds of things in it:

- **the platform** (boards.txt, platform.txt, cores/, variants/, libraries/) —
  small, changes often, is basically your source code
- **the tools** (esp-x32, esp32s3-libs, esptool_py) — hundreds of MB,
  changes rarely, is a third-party/prebuilt toolchain

Arduino's Boards Manager only re-downloads a tool when its *version number*
in `toolsDependencies` changes. It has no idea whether the bytes actually
changed — it just trusts the version string. So the entire optimization is:
**stop re-versioning tools every time you release a platform update.**
That's it. Nothing needs to diff or merge anything at the byte level.

## What each file does

- `.github/workflows/validate-pr.yml` — runs on every PR into `main` that
  touches `elyssa-arduino/**`. Compiles a smoke-test sketch against your
  board. Make this a required status check + require 1 review in branch
  protection, and you get the "PR → review → merge" gate you asked for.
- `.github/workflows/release.yml` — runs on push to `main` (i.e. right
  after a PR merges), but ONLY if `elyssa-arduino/**` changed. Zips just
  the platform folder, bumps its semver patch version, computes the new
  checksum/size, cuts a GitHub Release, and publishes the updated index
  JSON to a `gh-pages` branch. Never touches the `tools` array.
- `.github/workflows/release-toolchain.yml` — manual (`workflow_dispatch`),
  for the rare occasion you actually rebuild a toolchain. Fully separate
  release tag (`tools-<name>-<version>`), fully separate history.
- `scripts/bump_package_index.py` / `scripts/bump_tool_entry.py` — the
  actual JSON surgery, done with `json` module so formatting stays clean
  and only the relevant fields change.

## Library Manager vs Boards Manager — the split you're actually asking for

Your CI question ("can we split variant.cpp/pins hardware from the
libraries, each with its own pipeline and its own package") has two
different answers depending on which part you mean:

**variant.cpp / pins_arduino.h / boards.txt / cores/** — these can NOT be
split into independently-downloadable units. Arduino's build system
resolves your FQBN (`moovma:esp32:elyssa`) by looking up `boards.txt`'s
`build.variant` field to find a `variants/<name>/` folder *inside the
same platform package*. Boards Manager only ever versions and ships the
whole platform as one atomic zip — this is true for every Arduino core,
including the official ESP32 core (dozens of board variants, one
package, one version number). You CAN still scope your CI trigger to
only fire when this folder changes (that's what `release.yml`'s `paths:`
filter already does) — you just can't make the *download* itself
per-variant. It's already small since it excludes the toolchain, so this
mostly doesn't matter in practice.

**libraries/** — these SHOULD be split out, and Arduino already has a
completely separate, simpler mechanism for exactly this: **Library
Manager**. It does not use a `package_index.json` at all. Instead:

1. Each library is (in the well-documented, standard case) its own git
   repository with a `library.properties` file at the root.
2. You bump the `version=` field in `library.properties` and push a
   matching git tag (e.g. `v1.2.0`).
3. Arduino's indexer polls registered repos roughly hourly, notices the
   new tag, and publishes it. No zip-building, no checksum, no index
   file to maintain — GitHub generates the tag archive automatically.
4. Users with that library installed see "update available" for **that
   library only**, independent of your board platform and every other
   library.
5. One-time setup: submit the repo URL via PR to
   `arduino/library-registry` (or a fork registry like SparkFun's/
   Adafruit's, if applicable). After that, it's fully automatic.

Crucially: **Library Manager has no equivalent of "Additional Boards
Manager URLs."** Boards Manager happily reads any third-party index URL
you host yourself (that's the whole reason your current
`package_bejaouihamza_elyssa_index.json` scheme works at all) — Library
Manager does not support a private/self-hosted index the same way. The
only way to get "modify a library → subscribers get notified" is
registering with the real Arduino registry. There is a manual escape
hatch (`arduino-cli lib install --git-url <repo>` with
`enable_unsafe_install` set), but that's a one-time manual pull per
user, not an update subscription.

`release-library-template.yml` + `scripts/bump_library_properties.py`
implement step 2 above. Copy the workflow once per library.

**Recommended repo layout**, given all of the above:

```
Elyssa-dev-board/              # platform only: boards.txt, platform.txt,
├── elyssa-arduino/            # cores/, variants/elyssa/{pins_arduino.h,
│   ├── boards.txt             # variant.cpp} — one release unit, CI
│   ├── platform.txt           # triggered by release.yml
│   ├── cores/esp32/...
│   └── variants/elyssa/
│       ├── pins_arduino.h
│       └── variant.cpp
└── package_bejaouihamza_elyssa_index.json

ElyssaIMU/                     # separate repo, own library.properties,
├── library.properties         # own release-library-imu.yml, own tag
├── src/                       # namespace, registered separately with
└── examples/                  # arduino/library-registry

ElyssaPower/                   # same pattern, fully independent
├── library.properties
├── src/
└── examples/
```



**1. Where does GitHub Pages actually serve from?**
Your screenshot shows Pages deploying from `main` directly. If you also
want `main` protected (required PR + review), the bot commit that updates
the index JSON in `release.yml` will get rejected by that same protection
rule. Pick one:
- **Option A (what I wrote):** point Pages at a separate `gh-pages` branch
  instead. `main` stays fully protected for humans; the bot only ever
  writes to `gh-pages`, which needs no protection at all.
- **Option B:** keep Pages on `main`, and add the bot's identity (or a
  PAT) to branch protection's "allow specified actors to bypass required
  pull requests" list. Simpler to set up, slightly weaker guarantee since
  automated commits skip review by design (they're deterministic version
  bumps, so that's a reasonable trade — your call).

**2. Client-side auto-update has a hard ceiling.**
Even with all of this working perfectly, the Arduino IDE will show
"update available" in Boards Manager — it will **not** silently
auto-install for people who already have the board installed. That's an
Arduino IDE limitation, not something CI can route around. If you want
truly silent updates on connect (no click required), that means shipping
your own small companion tool that runs `arduino-cli core update-index &&
arduino-cli core upgrade moovma:esp32` on a schedule or on USB-connect
(e.g. a udev rule on Linux) — a separate piece of software from anything
here.

## Honesty note

I built this from your pasted package JSON, README, and Actions
screenshots — I wasn't able to fetch your live repo to confirm exact
paths (`elyssa-arduino/` layout, board fqbn, example sketch location).
Test `validate-pr.yml` and `release.yml` on a throwaway branch/fork
before trusting them against real users' installs — the arduino-cli
commands in particular may need small adjustments to match your real
`boards.txt` board id.

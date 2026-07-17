#!/usr/bin/env python3
"""
Bump the *platform* version in package_bejaouihamza_elyssa_index.json,
point it at a freshly built release zip, and refresh checksum/size.

Deliberately does NOT touch the "tools" array (esp-x32, esp32s3-libs,
esptool_py). That's the whole point: a change to boards.txt/cores/
libraries should never force already-installed users to re-download
a 400MB toolchain they already have cached.
"""
import argparse
import hashlib
import json
import os
import sys
from pathlib import Path


def sha256_of(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def bump_semver(version: str, part: str) -> str:
    major, minor, patch = (int(x) for x in version.split("."))
    if part == "major":
        return f"{major + 1}.0.0"
    if part == "minor":
        return f"{major}.{minor + 1}.0"
    return f"{major}.{minor}.{patch + 1}"


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--index", required=True, help="path to package_*_index.json")
    ap.add_argument("--zip", required=True, help="path to the freshly built platform zip")
    ap.add_argument("--repo", required=True, help="owner/repo, e.g. bejaouihamza/Elyssa-dev-board")
    ap.add_argument("--bump", default="patch", choices=["major", "minor", "patch"])
    ap.add_argument("--board-name", default="Elyssa", help="value of boards[].name to match")
    args = ap.parse_args()

    index_path = Path(args.index)
    zip_path = Path(args.zip)
    data = json.loads(index_path.read_text())

    platform = None
    for pkg in data["packages"]:
        for plat in pkg["platforms"]:
            if any(b["name"] == args.board_name for b in plat.get("boards", [])):
                platform = plat
                break
    if platform is None:
        sys.exit(f"No platform found for board '{args.board_name}' in {index_path}")

    old_version = platform["version"]
    new_version = bump_semver(old_version, args.bump)
    checksum = sha256_of(zip_path)
    size = str(zip_path.stat().st_size)
    tag = f"v{new_version}"
    filename = zip_path.name

    platform["version"] = new_version
    platform["url"] = f"https://github.com/{args.repo}/releases/download/{tag}/{filename}"
    platform["archiveFileName"] = filename
    platform["checksum"] = f"SHA-256:{checksum}"
    platform["size"] = size
    # toolsDependencies intentionally left as-is

    index_path.write_text(json.dumps(data, indent=2) + "\n")

    gh_out = os.environ.get("GITHUB_OUTPUT")
    if gh_out:
        with open(gh_out, "a") as f:
            f.write(f"old_version={old_version}\n")
            f.write(f"new_version={new_version}\n")
            f.write(f"tag={tag}\n")
            f.write(f"checksum=sha256:{checksum}\n")
            f.write(f"size={size}\n")

    print(f"Bumped platform version: {old_version} -> {new_version} (tools untouched)")


if __name__ == "__main__":
    main()

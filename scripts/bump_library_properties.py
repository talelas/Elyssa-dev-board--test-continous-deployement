#!/usr/bin/env python3
"""
Bump the `version=` line in a library's library.properties.
Run this scoped to ONE library's folder only — that's what makes the
per-library release independent of the platform and of every other
library.
"""
import argparse
import os
import re
from pathlib import Path


def bump_semver(version: str, part: str) -> str:
    major, minor, patch = (int(x) for x in version.split("."))
    if part == "major":
        return f"{major + 1}.0.0"
    if part == "minor":
        return f"{major}.{minor + 1}.0"
    return f"{major}.{minor}.{patch + 1}"


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--properties", required=True, help="path to library.properties")
    ap.add_argument("--bump", default="patch", choices=["major", "minor", "patch"])
    args = ap.parse_args()

    path = Path(args.properties)
    text = path.read_text()
    match = re.search(r"^version=(.+)$", text, flags=re.MULTILINE)
    if not match:
        raise SystemExit(f"No version= line found in {path}")

    old_version = match.group(1).strip()
    new_version = bump_semver(old_version, args.bump)
    text = re.sub(r"^version=.+$", f"version={new_version}", text, flags=re.MULTILINE)
    path.write_text(text)

    gh_out = os.environ.get("GITHUB_OUTPUT")
    if gh_out:
        with open(gh_out, "a") as f:
            f.write(f"old_version={old_version}\n")
            f.write(f"new_version={new_version}\n")
            f.write(f"tag=v{new_version}\n")

    print(f"{path}: {old_version} -> {new_version}")


if __name__ == "__main__":
    main()

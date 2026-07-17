#!/usr/bin/env python3
"""
Update ONE entry in the "tools" array (esp-x32 / esp32s3-libs / esptool_py).
Run this only when the toolchain itself actually changed — not on every
board-code release. Assumes one zip is reused across all host platforms,
matching your current index (same checksum across mingw32/darwin/linux).
If your hosts ever need genuinely different archives, extend --system-map.
"""
import argparse
import hashlib
import json
from pathlib import Path


def sha256_of(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--index", required=True)
    ap.add_argument("--tool", required=True, help="esp-x32 | esp32s3-libs | esptool_py")
    ap.add_argument("--version", required=True)
    ap.add_argument("--zip", required=True)
    ap.add_argument("--repo", required=True)
    ap.add_argument(
        "--hosts",
        default="x86_64-mingw32,x86_64-apple-darwin,x86_64-pc-linux-gnu",
        help="comma-separated host triples to update",
    )
    args = ap.parse_args()

    index_path = Path(args.index)
    zip_path = Path(args.zip)
    data = json.loads(index_path.read_text())

    checksum = f"SHA-256:{sha256_of(zip_path)}"
    size = str(zip_path.stat().st_size)
    filename = zip_path.name
    url = f"https://github.com/{args.repo}/releases/download/tools-{args.tool}-{args.version}/{filename}"
    hosts = set(args.hosts.split(","))

    updated = False
    for pkg in data["packages"]:
        for tool in pkg.get("tools", []):
            if tool["name"] != args.tool:
                continue
            tool["version"] = args.version
            for system in tool["systems"]:
                if system["host"] in hosts:
                    system["url"] = url
                    system["archiveFileName"] = filename
                    system["checksum"] = checksum
                    system["size"] = size
            updated = True

    if not updated:
        raise SystemExit(f"Tool '{args.tool}' not found in {index_path}")

    index_path.write_text(json.dumps(data, indent=2) + "\n")
    print(f"Updated tool '{args.tool}' -> {args.version} for hosts: {hosts}")
    print("Reminder: bump toolsDependencies on a platform entry only if you WANT")
    print("users to be forced onto this new tool version on their next update.")


if __name__ == "__main__":
    main()

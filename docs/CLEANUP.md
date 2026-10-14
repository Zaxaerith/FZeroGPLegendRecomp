# Final cleanup

Cleanup scope: 2026-10-02. Only this project is modified. Generated cartridge
and BIOS code, build trees, compiler/JIT caches, historical traces, frame dumps,
and one-off diagnostic scripts are temporary and are removed after verification.

Existing docs and historical evidence are retained at the user's request.
The formal smoke route and existing small scripts are retained.

The local runtime checkout is reproducible: upstream
https://github.com/mstan/gbarecomp.git at
`477e3d12dd0920a4961d58ba625ec2afe505c1fb`; its full tracked diff equals the
retained `patches/gbarecomp-fzero-compat.patch`. No private snapshot changes
were found. The build script can clone, pin and patch it. The old reference
project and ROM-hacking notes are not consumed by any retained build script.

Save copies are SHA-256 compared before deleting their containing directories.
Every distinct save is retained under ignored `saves/`, with original relative
locations and canonical hashes in `saves/preservation.json`. The root USA ROM
is the sole game dump; the shared BIOS is only read and is not modified.

Historical Git commits contain generated cartridge C++; this cleanup does not
rewrite history or push. A source tree free of generated files does not make
those older commits suitable for a clean release automatically.

Follow-up: the failed trial build could not fetch toml++ because the execution
environment could not connect to GitHub. This is recorded as an unverified cold
build, not a PASS. The trial build, logs outside docs, recoverable runtime
checkout, and unused reference snapshot are now removed. Existing docs and
their historical evidence are preserved. No further cold build or race run was
performed. Distinct saves stay protected under `saves/`.

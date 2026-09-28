# Third-party notices

This repository contains integration code and a patch for a pinned copy of
[gbarecomp](https://github.com/mstan/gbarecomp), commit
`477e3d12dd0920a4961d58ba625ec2afe505c1fb`. The upstream project is
copyright Matthew Stanley and is licensed under PolyForm Noncommercial 1.0.0;
see [its license](third_party_licenses/gbarecomp-LICENSE.txt). The pinned
checkout is fetched locally during a build and is not included in this Git
repository. Its own `THIRD_PARTY_ATTRIBUTION.md` and `third_party/MPL-2.0.txt`
cover the components it incorporates from other projects.

The Windows build uses [SDL2](https://www.libsdl.org/) for window, input and
audio support. SDL2 is copyright Sam Lantinga and contributors and uses the
zlib license; see [SDL2's license](third_party_licenses/SDL2-LICENSE.txt).
Its DLL is copied into the local build directory and is not tracked here.

The recompilation tool uses [toml++](https://github.com/marzer/tomlplusplus)
v3.4.0 to read the game configuration. It is copyright Mark Gillard and is
licensed under MIT; see [its license](third_party_licenses/tomlplusplus-LICENSE.txt).
The pinned source is fetched into the ignored build directory when a local
copy is not supplied.

MinGW-w64/GCC supplies the C++ toolchain and may stage its runtime DLLs beside
the local executable. Its licensing is separate from this project's license;
redistributors of binaries must retain the notices supplied with their
toolchain distribution.

The project's own integration code is licensed by Zaxaerith under the
[PolyForm Noncommercial License 1.0.0](LICENSE). This does not change the
copyright or license of any third-party component or game data.

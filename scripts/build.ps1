param(
    [string]$RomPath,
    [string]$BiosPath,
    [string]$SDL2Root,
    [string]$ToolchainBin,
    [string]$TomlppIncludeDir,
    [string]$RuntimeSource,
    [string]$BuildDir = 'build-release',
    [switch]$RegenerateCartridgeSource,
    [ValidateRange(1, 16)][int]$Parallel = 2
)

$ErrorActionPreference = 'Stop'
$root = (Resolve-Path -LiteralPath (Join-Path $PSScriptRoot '..')).Path
$runtimeCommit = '477e3d12dd0920a4961d58ba625ec2afe505c1fb'
$romSha1 = '977588D9D27B7115E0BB309FB019AE81B9F413FF'
$biosSha1 = '300C20DF6731A33952DED8C436F7F186D25D3492'

function Assert-Exit([string]$Action) {
    if ($LASTEXITCODE -ne 0) { throw "$Action failed (exit $LASTEXITCODE)." }
}
function Full-Path([string]$Path) {
    if (-not $Path) { throw 'A required path is missing.' }
    return (Resolve-Path -LiteralPath $Path).Path
}
function Toml-Path([string]$Path) {
    return $Path.Replace('\', '/')
}

if (-not $RomPath) {
    $roms = @(Get-ChildItem -LiteralPath $root -File -Filter '*.gba')
    if ($roms.Count -ne 1) {
        throw 'Place one legally dumped USA ROM in the project root, or pass -RomPath.'
    }
    $RomPath = $roms[0].FullName
}
if (-not $BiosPath) {
    $candidate = Join-Path $root 'gba_bios.bin'
    if (-not (Test-Path -LiteralPath $candidate)) {
        throw 'Pass -BiosPath pointing to your own GBA BIOS dump.'
    }
    $BiosPath = $candidate
}
$RomPath = Full-Path $RomPath
$BiosPath = Full-Path $BiosPath
if ((Get-FileHash -LiteralPath $RomPath -Algorithm SHA1).Hash -ne $romSha1) {
    throw 'ROM SHA-1 does not match the supported BFZE USA dump.'
}
if ((Get-FileHash -LiteralPath $BiosPath -Algorithm SHA1).Hash -ne $biosSha1) {
    throw 'BIOS SHA-1 does not match the supported GBA BIOS dump.'
}

$buildPath = if ([IO.Path]::IsPathRooted($BuildDir)) {
    [IO.Path]::GetFullPath($BuildDir)
} else {
    [IO.Path]::GetFullPath((Join-Path $root $BuildDir))
}
$rootPrefix = $root.TrimEnd('\', '/') + [IO.Path]::DirectorySeparatorChar
if (-not $buildPath.StartsWith($rootPrefix, [StringComparison]::OrdinalIgnoreCase)) {
    throw 'BuildDir must stay inside this project.'
}
New-Item -ItemType Directory -Path $buildPath -Force | Out-Null

if (-not $RuntimeSource) { $RuntimeSource = Join-Path $root '_deps/gbarecomp' }
$runtimePath = [IO.Path]::GetFullPath($RuntimeSource)
if (-not $runtimePath.StartsWith($rootPrefix, [StringComparison]::OrdinalIgnoreCase)) {
    throw 'RuntimeSource must stay inside this project; it receives a local patch.'
}
if (-not (Test-Path -LiteralPath $runtimePath)) {
    New-Item -ItemType Directory -Path (Split-Path -Parent $runtimePath) -Force | Out-Null
    & git clone https://github.com/mstan/gbarecomp.git $runtimePath
    Assert-Exit 'gbarecomp clone'
}
if (-not (Test-Path -LiteralPath (Join-Path $runtimePath '.git'))) {
    throw "RuntimeSource is not a Git checkout: $runtimePath"
}
$gitArgs = @('-c', "safe.directory=$(Toml-Path $runtimePath)", '-C', $runtimePath)
$actualCommit = (& git @gitArgs rev-parse HEAD).Trim()
Assert-Exit 'gbarecomp revision check'
if ($actualCommit -ne $runtimeCommit) {
    if ($runtimePath -eq (Join-Path $root '_deps/gbarecomp')) {
        & git @gitArgs checkout --detach $runtimeCommit
        Assert-Exit 'gbarecomp pinned checkout'
    } else {
        throw "RuntimeSource must be at pinned commit $runtimeCommit (found $actualCommit)."
    }
}
$patchPath = Join-Path $root 'patches/gbarecomp-fzero-compat.patch'
& git @gitArgs apply --reverse --check $patchPath 2>$null
if ($LASTEXITCODE -ne 0) {
    & git @gitArgs apply --check $patchPath
    Assert-Exit 'gbarecomp patch check'
    & git @gitArgs apply $patchPath
    Assert-Exit 'gbarecomp patch'
}

$cmake = Get-Command cmake.exe -ErrorAction Stop
$ninja = Get-Command ninja.exe -ErrorAction Stop
if ($cmake.Source.Replace('\', '/') -match '/(msys[^/]*|cygwin[^/]*|Git/usr)/') {
    throw 'Use a native Windows CMake, not the MSYS/Cygwin/Git Unix build.'
}
if (-not $ToolchainBin) {
    $compiler = Get-Command g++.exe -ErrorAction Stop
    $ToolchainBin = Split-Path -Parent $compiler.Source
}
$ToolchainBin = Full-Path $ToolchainBin
$cc = Join-Path $ToolchainBin 'gcc.exe'
$cxx = Join-Path $ToolchainBin 'g++.exe'
if (-not (Test-Path -LiteralPath $cc) -or -not (Test-Path -LiteralPath $cxx)) {
    throw 'ToolchainBin must contain gcc.exe and g++.exe (MinGW-w64).'
}
if (-not $SDL2Root) {
    throw 'Pass -SDL2Root pointing to the MinGW-w64 SDL2 prefix (include, lib, bin).'
}
$SDL2Root = Full-Path $SDL2Root
$sdlInclude = Join-Path $SDL2Root 'include/SDL2'
$sdlLibrary = Join-Path $SDL2Root 'lib/libSDL2.dll.a'
$sdlDll = Join-Path $SDL2Root 'bin/SDL2.dll'
foreach ($file in @((Join-Path $sdlInclude 'SDL.h'), $sdlLibrary, $sdlDll)) {
    if (-not (Test-Path -LiteralPath $file)) { throw "SDL2 file missing: $file" }
}

$biosDir = Join-Path $buildPath 'generated_bios'
$saveDir = Join-Path $buildPath 'saves'
New-Item -ItemType Directory -Path $biosDir, $saveDir -Force | Out-Null
$template = Get-Content -LiteralPath (Join-Path $root 'config/game.toml.in') -Raw
$config = $template.Replace('@ROM_PATH@', (Toml-Path $RomPath))
$config = $config.Replace('@BIOS_PATH@', (Toml-Path $BiosPath))
$config = $config.Replace('@SAVE_PATH@', (Toml-Path (Join-Path $saveDir 'fzero_gp_legend_usa.sav')))
$gameConfig = Join-Path $buildPath 'game.toml'
Set-Content -LiteralPath $gameConfig -Value $config -Encoding utf8

$configure = @(
    '-S', $root, '-B', $buildPath, '-G', 'Ninja',
    '-DCMAKE_BUILD_TYPE=Release',
    "-DCMAKE_C_COMPILER=$cc", "-DCMAKE_CXX_COMPILER=$cxx",
    "-DGBARECOMP_ROOT=$runtimePath",
    "-DGBARECOMP_GENERATED_BIOS_DIR=$biosDir",
    '-DGBARECOMP_SELFHEAL_RECOMPILE_DEFAULT=ON',
    "-DGBARECOMP_MINGW_RUNTIME_BIN=$ToolchainBin",
    "-DSDL2_INCLUDE_DIR=$sdlInclude", "-DSDL2_LIBRARY=$sdlLibrary"
)
if ($TomlppIncludeDir) {
    $TomlppIncludeDir = Full-Path $TomlppIncludeDir
    if (-not (Test-Path -LiteralPath (Join-Path $TomlppIncludeDir 'toml.hpp'))) {
        throw 'TomlppIncludeDir must contain toml.hpp.'
    }
    $configure += "-DGBARECOMP_TOMLPP_INCLUDE_DIR=$TomlppIncludeDir"
}
& $cmake.Source @configure
Assert-Exit 'CMake configure for generator'
& $cmake.Source --build $buildPath --target gba_recompile --parallel $Parallel
Assert-Exit 'gba_recompile build'
$generator = Join-Path $buildPath 'runtime_build/gba_recompile.exe'
& $generator --bios $BiosPath --config (Join-Path $root 'config/bios-resume.toml') --out $biosDir
Assert-Exit 'BIOS recompilation'
if ($RegenerateCartridgeSource) {
    $cartDir = Join-Path $buildPath 'generated_cart'
    New-Item -ItemType Directory -Path $cartDir -Force | Out-Null
    & $generator --rom $RomPath --config $gameConfig --out $cartDir
    Assert-Exit 'ROM recompilation'
    $python = Get-Command python.exe -ErrorAction Stop
    & $python.Source (Join-Path $root 'scripts/organize_cartridge_source.py') `
        $cartDir (Join-Path $root 'src/cartridge')
    Assert-Exit 'cartridge source organization'
}
& $cmake.Source @configure
Assert-Exit 'CMake configure for generated sources'
& $cmake.Source --build $buildPath --target fzero --parallel $Parallel
Assert-Exit 'fzero build'
Copy-Item -LiteralPath $sdlDll -Destination (Join-Path $buildPath 'SDL2.dll') -Force
Set-Content -LiteralPath (Join-Path $buildPath 'host-compiler.txt') -Value (Toml-Path $cxx) -Encoding utf8
Write-Host "Built: $(Join-Path $buildPath 'fzero.exe')"

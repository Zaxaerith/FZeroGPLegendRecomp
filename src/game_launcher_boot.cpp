// Generic GBARecomp/recomp-ui seam for F-Zero: GP Legend.
#include "launcher_seam.h"
#include "sha1.h"

int game_launcher_preboot(std::vector<std::string>& args, const gbarecomp::RunOptions& options) {
    return gbarecomp_launcher_preboot(args, options);
}

// The generic runtime permits warn-and-try BIOS dumps. This game's translated
// retail BIOS requires the exact identity even for explicit/headless CLI runs.
int game_validate_inputs(std::vector<std::string>& args, const gbarecomp::RunOptions& options) {
    std::string path, rom_path;
    for (std::size_t i = 1; i < args.size(); ++i) {
        if (args[i] == "--help" || args[i] == "-h") return 0;
        if (args[i] == "--bios" && i + 1 < args.size()) path = args[++i];
        else if (args[i] == "--rom" && i + 1 < args.size()) rom_path = args[++i];
    }
    if (path.empty()) {
        path = gbarecomp_seam::read_single_line(
            (std::filesystem::path(gbarecomp_seam::exe_dir(args)) / "bios.cfg").string());
    }
    if (path.empty()) {
        std::fprintf(stderr, "[fzero] Retail BIOS required: select it in the launcher or pass --bios.\n");
        return 1;
    }
    gba::GbaBios bios;
    std::string error;
    if (!bios.load_from_file(path, gba::GbaBios::kExpectedSha1, &error)) {
        std::fprintf(stderr, "[fzero] BIOS identity rejected: %s\n", error.c_str());
        return 1;
    }
    if (rom_path.empty()) {
        rom_path = gbarecomp_seam::read_single_line(
            (std::filesystem::path(gbarecomp_seam::exe_dir(args)) / "rom.cfg").string());
    }
    std::ifstream rom(rom_path, std::ios::binary | std::ios::ate);
    if (!rom || rom.tellg() != 16777216) {
        std::fprintf(stderr, "[fzero] Expected the 16 MiB USA BFZE ROM; select it in the launcher or pass --rom.\n");
        return 1;
    }
    std::vector<std::uint8_t> bytes(16777216);
    rom.seekg(0);
    rom.read(reinterpret_cast<char*>(bytes.data()), bytes.size());
    if (!rom || gba::sha1(bytes.data(), bytes.size()).hex() != options.builtin_rom_sha1) {
        std::fprintf(stderr, "[fzero] ROM SHA-1 mismatch; expected %s.\n", options.builtin_rom_sha1);
        return 1;
    }
    // Validate before the runtime can persist an explicit invalid path.
    args.emplace_back("--rom");
    args.emplace_back(rom_path);
    args.emplace_back("--bios");
    args.emplace_back(path);
    // An explicit CLI/config hash cannot weaken this cartridge's identity gate.
    args.emplace_back("--rom-sha1");
    args.emplace_back(options.builtin_rom_sha1);
    return 0;
}

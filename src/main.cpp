#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <filesystem>
#include <string>
#include <vector>

#include "host_setup.h"
#include "runtime.h"

int game_launcher_preboot(std::vector<std::string>&, const gbarecomp::RunOptions&);
int game_validate_inputs(std::vector<std::string>&, const gbarecomp::RunOptions&);

int main(int argc, char** argv) {
    gbarecomp::RunOptions options;
    options.builtin_game_name = "F-Zero: GP Legend (USA)";
    options.builtin_rom_sha1 = "977588d9d27b7115e0bb309fb019ae81b9f413ff";
    options.builtin_rom_crc32 = 0x781AAB58u;
    options.launcher_region = "USA";
    options.launcher_game_config = "game.toml";
    options.launcher_expose_widescreen = false;
    options.launcher_expose_adaptive_view = false;
    options.launcher_save_path = "saves/fzero_gp_legend_usa.sav";

    bool developer_mode = false;
    bool force_launcher = false;
    std::vector<std::string> args;
    args.reserve(argc);
    for (int i = 0; i < argc; ++i) {
        if (std::strcmp(argv[i], "--dev") == 0) {
            developer_mode = true;
            continue;
        }
        if (std::strcmp(argv[i], "--launcher") == 0) {
            force_launcher = true;
            args.emplace_back(argv[i]);
            continue;
        }
        if (std::strcmp(argv[i], "--help") == 0 ||
            std::strcmp(argv[i], "-h") == 0) {
            std::puts("FZeroGPLegendRecomp [--bios <path>] [--rom <path>] [--launcher] [--dev]");
            return 0;
        }
        args.emplace_back(argv[i]);
    }

    const bool player_launch = (args.size() == 1) || force_launcher;

    // Normal player launch defaults to no on-the-fly compiler invocation
    // and suppresses debug dumps unless developer mode was requested.
    if (!developer_mode) {
#ifdef _WIN32
        if (!std::getenv("GBARECOMP_SELFHEAL_RECOMPILE"))
            _putenv("GBARECOMP_SELFHEAL_RECOMPILE=0");
        if (!std::getenv("GBARECOMP_MISS_FRAG"))
            _putenv("GBARECOMP_MISS_FRAG=NUL");
        if (!std::getenv("GBARECOMP_COVERAGE_JSON"))
            _putenv("GBARECOMP_COVERAGE_JSON=NUL");
        if (!std::getenv("GBARECOMP_SESSION_DIAGNOSTICS"))
            _putenv("GBARECOMP_SESSION_DIAGNOSTICS=0");
#else
        setenv("GBARECOMP_SELFHEAL_RECOMPILE", "0", 0);
        setenv("GBARECOMP_MISS_FRAG", "/dev/null", 0);
        setenv("GBARECOMP_COVERAGE_JSON", "/dev/null", 0);
        setenv("GBARECOMP_SESSION_DIAGNOSTICS", "0", 0);
#endif
    }

    configure_host_launch(player_launch, developer_mode);

    if (player_launch) {
        // Ensure saves directory exists before launcher or preboot creates paths
        std::error_code ec;
        std::filesystem::create_directories("saves", ec);

        if (game_launcher_preboot(args, options)) return 0;
        if (game_validate_inputs(args, options)) return 1;
        args.emplace_back("--save");
        args.emplace_back(options.launcher_save_path);
        args.emplace_back("--window");
    }

    std::vector<char*> native_args;
    native_args.reserve(args.size());
    for (auto& arg : args) native_args.push_back(arg.data());
    return gbarecomp::run_game(static_cast<int>(native_args.size()),
                              native_args.data(), options);
}

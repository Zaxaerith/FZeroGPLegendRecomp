#include <cstdio>
#include <cstring>
#include <vector>

#include "host_setup.h"
#include "runtime.h"

int main(int argc, char** argv) {
    bool developer_mode = false;
    std::vector<char*> game_args;
    game_args.push_back(argv[0]);
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--dev") == 0) {
            developer_mode = true;
            continue;
        }
        if (std::strcmp(argv[i], "--help") == 0 ||
            std::strcmp(argv[i], "-h") == 0) {
            std::puts("fzero [--bios <path>] [--rom <path>] [game.toml] [--dev]");
            return 0;
        }
        game_args.push_back(argv[i]);
    }

    configure_host_launch(game_args.size() == 1, developer_mode);

    gbarecomp::RunOptions opts;
    opts.builtin_game_name = "F-Zero: GP Legend (USA)";
    opts.builtin_rom_sha1 = "977588d9d27b7115e0bb309fb019ae81b9f413ff";
    opts.builtin_rom_crc32 = 0x781AAB58u;
    return gbarecomp::run_game(static_cast<int>(game_args.size()),
                              game_args.data(), opts);
}

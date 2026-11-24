// main.cpp — entry point. Wires config and subsystems together.

#include "browserpassbackup/settings.h"
#include "browserpassbackup/readers.h"
#include "browserpassbackup/merge.h"
#include "browserpassbackup/encrypt.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    browserpassbackup::Settings settings = browserpassbackup::Settings::load_default();
    browserpassbackup::Readers readers(settings.store_path);
    browserpassbackup::Merge merge(settings.store_path);
    browserpassbackup::Encrypt encrypt(settings.store_path);
    std::fprintf(stderr, "[browser-pass-backup] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

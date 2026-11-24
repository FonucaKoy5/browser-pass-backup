// encrypt.cpp — part of browser-pass-backup.

#include "browserpassbackup/encrypt.h"

#include <cstdio>

namespace browserpassbackup {

Encrypt::Encrypt(const std::string& config_path)
    : config_path_(config_path) {}

void Encrypt::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Encrypt::run() {
    if (verbose_) std::fprintf(stderr, "[browser-pass-backup] encrypt: run\n");
    // core logic lives here
    return true;
}

}  // namespace browserpassbackup

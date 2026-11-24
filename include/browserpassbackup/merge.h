// merge — part of browser-pass-backup.

#pragma once

#include <string>
#include <vector>

namespace browserpassbackup {

class Merge {
public:
    explicit Merge(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace browserpassbackup

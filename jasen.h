#pragma once
#include <string>
#include <vector>

struct Kdata {
    std::string type; // e.g., "button"
    std::vector<std::string> styles; // e.g., "rounded", "hover", "blue"
};

Kdata jasensyotto(const std::string& syotto);
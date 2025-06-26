#pragma once
#include <string>
#include <vector>

struct Kdata {
    std::string type; 
    std::vector<std::string> styles; 
};

Kdata jasensyotto(const std::string& syotto);

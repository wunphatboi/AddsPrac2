#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
#include <string>
class Ninja: public Move{
    public:
    Ninja();
    std::string getName();
    std::vector<std::string> getWinners();
    std::vector<std::string> getLosers();
};
#endif
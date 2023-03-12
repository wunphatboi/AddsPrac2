#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include <string>
class Zombie: public Move{
    public:
    Zombie();
    std::string getName();
    std::vector<std::string> getWinners();
    std::vector<std::string> getLosers();
};
#endif
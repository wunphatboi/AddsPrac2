#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include <string>
class Scissors: public Move{
    public:
    Scissors();
    std::string getName();
    std::vector<std::string> getWinners();
    std::vector<std::string> getLosers();
};
#endif
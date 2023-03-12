#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include <string>
class Monkey: public Move{
    public:
    Monkey();
    std::string getName();
    std::vector<std::string> getWinners();
    std::vector<std::string> getLosers();
};
#endif
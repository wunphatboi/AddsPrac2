#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
#include <string>
class Robot: public Move{
    public:
    Robot();
    std::string getName();
    std::vector<std::string> getWinners();
    std::vector<std::string> getLosers();
};
#endif
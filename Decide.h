#ifndef DECIDE_H
#define DECIDE_H
#include "Player.h"
#include <string>
class Decide{
    public:
    Decide();
    Player * calcWinner(Player * move1, Player * move2);
    std::string temp1;
    std::string temp2;
};
#endif
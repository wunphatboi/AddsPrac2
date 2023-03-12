#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>
class Human: public Player{
    public:
    Human();
    Human(std::string NAME);
    std::string getName();
    Move * makeMove();
};
#endif
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
class Player{
    protected:
    std::string name;
    std::string move;
    public:
    Player();
    virtual std::string getName() = 0;
    virtual Move * makeMove() = 0;
    Move * buildMove(std::string type);
};
#endif
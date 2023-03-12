#include "Computer.h"
Computer::Computer(){
    name = "Computer";
};

std::string Computer::getName(){
    return name;
};

Move * Computer::makeMove(){
    move = "Rock";
    return buildMove(move);
};

#include "Rock.h"
#include "vector"
Rock::Rock(){
    name = "Rock";
};

std::string Rock::getName(){
    return name;
};

std::vector<std::string> Rock::getWinners(){
    return {"Scissors"};
};

std::vector<std::string> Rock::getLosers(){
    return {"Paper"};
};



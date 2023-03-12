#include "Ninja.h"
#include "vector"
Ninja::Ninja(){
    name = "Ninja";
};

std::string Ninja::getName(){
    return name;
};

std::vector<std::string> Ninja::getWinners(){
    return {"Pirate","Zombie"};
};

std::vector<std::string> Ninja::getLosers(){
    return {"Monkey","Robot"};
};


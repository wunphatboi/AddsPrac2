#include "Monkey.h"
#include "vector"
Monkey::Monkey(){
    name = "Monkey";
};

std::string Monkey::getName(){
    return name;
};

std::vector<std::string> Monkey::getWinners(){
    return {"Ninja","Robot"};
};

std::vector<std::string> Monkey::getLosers(){
    return {"Pirate","Zombie"};
};


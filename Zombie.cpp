#include "Zombie.h"
#include "vector"
Zombie::Zombie(){
    name = "Zombie";
};

std::string Zombie::getName(){
    return name;
};

std::vector<std::string> Zombie::getWinners(){
    return {"Pirate","Monkey"};
};

std::vector<std::string> Zombie::getLosers(){
    return {"Robot","Ninja"};
};


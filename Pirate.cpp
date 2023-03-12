#include "Pirate.h"
#include "vector"
Pirate::Pirate(){
    name = "Pirate";
};

std::string Pirate::getName(){
    return name;
};

std::vector<std::string> Pirate::getWinners(){
    return {"Robot","Monkey"};
};

std::vector<std::string> Pirate::getLosers(){
    return {"Ninja","Zombie"};
};


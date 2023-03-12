#include "Robot.h"
#include "vector"
Robot::Robot(){
    name = "Robot";
};

std::string Robot::getName(){
    return name;
};

std::vector<std::string> Robot::getWinners(){
    return {"Ninja","Zombie"};
};

std::vector<std::string> Robot::getLosers(){
    return {"Monkey","Pirate"};
};


#include "Scissors.h"
#include "vector"
Scissors::Scissors(){
    name = "Scissors";
};

std::string Scissors::getName(){
    return name;
};

std::vector<std::string> Scissors::getWinners(){
    return {"Paper"};
};

std::vector<std::string> Scissors::getLosers(){
    return {"Rock"};
};



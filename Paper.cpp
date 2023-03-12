#include "Paper.h"
#include "vector"
Paper::Paper(){
    name = "Paper";
};

std::string Paper::getName(){
    return name;
};

std::vector<std::string> Paper::getWinners(){
    return {"Rock"};
};

std::vector<std::string> Paper::getLosers(){
    return {"Scissors"};
};


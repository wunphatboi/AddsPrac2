#include "Player.h"
Player::Player(){};

Move * Player::buildMove(std::string type){
    if (type == "Rock"){
        Move * rock = new Rock;
        return rock;
    }else if (type == "Paper"){
        Move * paper = new Paper;
        return paper;
    }else if(type == "Scissors"){
        Move * scissors = new Scissors;
        return scissors;
    }else if(type == "Monkey"){
        Move * monkey = new Monkey;
        return monkey;
    }else if(type == "Robot"){
        Move * robot = new Robot;
        return robot;
    }else if(type == "Pirate"){
        Move * pirate = new Pirate;
        return pirate;
    }else if(type == "Ninja"){
        Move * ninja = new Ninja;
        return ninja;
    }else if(type == "Zombie"){
        Move * zombie = new Zombie;
        return zombie;
    }
    return NULL;
};
#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(){
    name = "Human";
};

Human::Human(std::string NAME){
    name = NAME;
};

std::string Human::getName(){
    return name;
};

Move * Human::makeMove(){
    cout << "Enter move: ";
    cin >> move;
    return buildMove(move);
};

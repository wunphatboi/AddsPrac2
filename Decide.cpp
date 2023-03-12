#include <iostream>
#include "Decide.h"
#include "vector"
using namespace std; 

Decide::Decide(){
};

Player * Decide::calcWinner(Player * p1, Player * p2){
    Move * firstPlayer = p1->makeMove();
    Move * secondPlayer = p2->makeMove();
    if (firstPlayer->getName() == secondPlayer->getName()){
        cout << "Its a Tie" << endl;
        return NULL;
    }
    for (int i = 0; i < secondPlayer->getWinners().size(); i++){
    if (firstPlayer->getName() == secondPlayer->getWinners().at(i)){
        cout << p2->getName() << " Wins"<< endl;
        return p2;
    }else if(firstPlayer->getName() == secondPlayer->getLosers().at(i)){
        cout << p1->getName() << " Wins"<< endl;
    return p1;
    }
}
return NULL;
};
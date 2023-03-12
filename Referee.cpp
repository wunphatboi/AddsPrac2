#include <iostream>
#include "Referee.h"
#include "vector"
using namespace std;

Referee::Referee(){
};

Player * Referee::refGame(Player * player1, Player * player2){
    Decide d1;
    Player * winner = d1.calcWinner(player1,player2);
    return winner;
};

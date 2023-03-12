#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include "Human.h"
int main(void){
    //Player * p1 = new Human;
    //Player * p2 = new Human;
    Referee r;
    //r.refGame(p1,p2);
    Human h1("Lebron");
    Human h2("Michael");
    r.refGame(&h1,&h2);
    //Player *winner;
    //winner = r.refGame(p1,p2);
    //std::cout << winner->getName() << std::endl;  // seg faulting
    return 0;
}
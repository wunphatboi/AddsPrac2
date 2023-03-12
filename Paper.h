#ifndef PAPER_H
#define PAPER_H
#include "Move.h"
#include <string>
class Paper: public Move{
    public:
    Paper();
    std::string getName();
    std::vector<std::string> getWinners();
    std::vector<std::string> getLosers();
};
#endif
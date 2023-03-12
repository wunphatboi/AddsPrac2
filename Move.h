#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <vector>
class Move{
    protected:
    std::string name;
    public:
    Move();
    virtual std::string getName() = 0;
    virtual std::vector<std::string> getWinners() = 0;
    virtual std::vector<std::string> getLosers() = 0;
};
#endif
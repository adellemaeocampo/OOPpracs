#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "GridItem.hpp"

class Robot : public GridItem {
private:
    int health;
public:
    Robot(int gridWidth, int gridHeight);
    int getHealth();
    void takeHit();
    bool move(int xOffset, int yOffset);
};

#endif

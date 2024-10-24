#include"Robot.hpp"

Robot::Robot(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), health(3) {}

int Robot::getHealth() {
  return health;
}

void Robot::takeHit() {
  if (health > 0) {
    health--;
  }
}

bool Robot::move(int xOffset, int yOffset) {
  if ((xOffset != 0 && yOffset == 0) || (xOffset == 0 && yOffset != 0)) {
    int newX = this->getCoordinates().first + xOffset;
    int newY = this->getCoordinates().second + yOffset;
      if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
        setCoordinates(newX, newY);
        return true;
      }
  }
    return false;
}
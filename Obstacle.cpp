#include"Obstacle.hpp"

Obstacle::Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

bool Obstacle::interact(Robot* player) {
  if (Helper::euclideanDistance(this->getCoordinates(), player->getCoordinates()) == 0) {
    player->takeHit();
    return player->getHealth() == 0;
  }
  return false;
}

InteractableType Obstacle::getType() {
  return OBSTACLE;
}
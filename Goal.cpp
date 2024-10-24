#include"Goal.hpp"

Goal::Goal(int width, int height) : Interactable(width / 2, height / 2, width, height) {

}

bool Goal::interact(Robot* player) {
  return Helper::euclideanDistance(this->getCoordinates(), player->getCoordinates()) == 0;
}

InteractableType Goal::getType() {
  return GOAL;
}
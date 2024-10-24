#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "Interactable.hpp"
#include "Helper.hpp"
#include "Robot.hpp"

class Obstacle : public Interactable {
public:
  Obstacle(int x, int y, int width, int height);
  bool interact(Robot* player) override;
  InteractableType getType() override;
};

#endif

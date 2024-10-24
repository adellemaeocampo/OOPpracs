#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"
#include "Helper.hpp"
#include "Robot.hpp"

class Goal : public Interactable {
public:
  Goal(int width, int height);
  bool interact(Robot* player) override;
  InteractableType getType();
};

#endif 

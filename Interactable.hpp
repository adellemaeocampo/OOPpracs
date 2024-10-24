#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

enum InteractableType {
  GOAL,
  OBSTACLE
};

class Robot;

class Interactable : public GridItem {
private:
  static int activeInteractableCount;
public:
  Interactable();
  Interactable(int x, int y, int width, int height);
  virtual ~Interactable();
  virtual bool interact(Robot* player) = 0;
  virtual InteractableType getType() = 0;
  static int getActiveInteractableCount();
};

#endif

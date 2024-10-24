#include"Interactable.hpp"

Interactable::Interactable() : GridItem() {
  activeInteractableCount++;
}

Interactable::Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {
  activeInteractableCount++;
}

Interactable::~Interactable() {
    activeInteractableCount--;
}

int Interactable::getActiveInteractableCount() {
  return activeInteractableCount;
}

int Interactable::activeInteractableCount = 0;
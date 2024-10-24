
#include "GridItem.hpp"

GridItem::GridItem() : x(0), y(0), width(0), height(0) {
  activeGridItemCount++;
}

GridItem::GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
  activeGridItemCount++;
}

GridItem::~GridItem() {
  activeGridItemCount--;
}

void GridItem::setCoordinates(int x, int y) {
  this->x = x;
  this->y = y;
}

std::pair<int, int> GridItem::getCoordinates() {
  return std::make_pair(x, y);
}

int GridItem::getGridWidth() {
  return width;
}

int GridItem::getGridHeight() {
  return height;
}

int GridItem::getActiveGridItemCount() {
  return activeGridItemCount;
}


int GridItem::activeGridItemCount = 0;
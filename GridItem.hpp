#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>

class GridItem {
private:
  int x, y;
  int width, height;
  static int activeGridItemCount;
public:
  // GridItem();
  // GridItem(int x, int y, int width, int height);
  // virtual ~GridItem();
  // void setCoordinates(int x, int y);
  // std::pair<int, int> getCoordinates();
  // int getGridWidth();
  // int getGridHeight();
  // static int getActiveGridItemCount();

  int activeGridItemCount = 0;

  GridItem() : x(0), y(0), width(0), height(0) {
      activeGridItemCount++;
  }

  GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
      activeGridItemCount++;
  }

  ~GridItem() {
      activeGridItemCount--;
  }

  void setCoordinates(int x, int y) {
      this->x = x;
      this->y = y;
  }

  std::pair<int, int> getCoordinates() {
      return std::make_pair(x, y);
  }

  int getGridWidth() {
      return width;
  }

  int getGridHeight() {
      return height;
  }

  int getActiveGridItemCount() {
      return activeGridItemCount;
  }

};

#endif

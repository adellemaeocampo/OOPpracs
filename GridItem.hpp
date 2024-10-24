#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>

class GridItem {
private:
  int x, y;
  int width, height;
  static int activeGridItemCount;
public:
  GridItem();
  GridItem(int x, int y, int width, int height);
  virtual ~GridItem();
  void setCoordinates(int x, int y);
  std::pair<int, int> getCoordinates();
  int getGridWidth();
  int getGridHeight();
  static int getActiveGridItemCount();
};



#endif

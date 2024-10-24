
#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
  GridItem item1(2, 3, 5, 5);
  GridItem item2(10, 12, 7, 7);

  std::cout << "Item 1 coordinates: " << item1.getCoordinates().first << ", " << item1.getCoordinates().second << std::endl;
  std::cout << "Item 2 coordinates: " << item2.getCoordinates().first << ", " << item2.getCoordinates().second << std::endl;
  // std::cout << "Active GridItem count: " << getActiveGridItemCount() << std::endl;

  double distance = Helper::euclideanDistance(item1.getCoordinates(), item2.getCoordinates());
  std::cout << "between item1 and item2: " << distance << std::endl;

  return 0;
}

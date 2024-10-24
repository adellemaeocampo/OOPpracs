#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"

#include <iostream>

int main() {
    Robot player(10, 10);
    
    Goal goal(10, 10);
    Obstacle obstacle(2, 2, 10, 10);

    std::cout << "Initial robot position: " << player.getCoordinates().first << ", " << player.getCoordinates().second << "\n";
    std::cout << "Initial robot health: " << player.getHealth() << std::endl;


    std::cout << "Move robot by (3, 0): " << (player.move(3, 0) ? "Success" : "Fail") << std::endl;
    std::cout << "Robot position: (" << player.getCoordinates().first << ", " << player.getCoordinates().second << ")\n";

    if (obstacle.interact(&player)) {
        std::cout << "Robot hit by obstacle, health: " << player.getHealth() << std::endl;
    } else {
        std::cout << "No interaction with obstacle.\n";
    }

    player.setCoordinates(goal.getCoordinates().first, goal.getCoordinates().second);
    std::cout << "Robot moved to goal position: (" << player.getCoordinates().first << ", " << player.getCoordinates().second << ")\n";

    if (goal.interact(&player)) {
        std::cout << "Robot has reached the goal!" << std::endl;
    } else {
        std::cout << "Robot has not reached the goal." << std::endl;
    }

    std::cout << "Active GridItems: " << GridItem::getActiveGridItemCount() << std::endl;
    std::cout << "Active Interactables: " << Interactable::getActiveInteractableCount() << std::endl;

    return 0;
}

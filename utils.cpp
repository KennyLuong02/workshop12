#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include "GameEntity.h"
#include "Utils.h"

using namespace std;

 std::tuple<int, int> Utils::generateRandomPos(int gridwidth, int gridHeight) {
    // Generate a random position
    // that goes from 0 to gridWidth or gridHeight
    srand(time(0));
    int i_width = (rand() % gridwidth);
    int i_height = (rand() % gridHeight);

   GameEntity::setPos(i_width, i_height);

 }

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
   // To calculate the distance between positions

}
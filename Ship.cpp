#include <iostream>
#include "GameEntity.h"
#include "Ship.h"

using namespace std;

Ship::Ship(): GameEntity::GameEntity() {};

Ship::Ship(int x, int y, char i_s): GameEntity::GameEntity(x, y, 'S') {};

void Ship::move(int dx, int dy) {
    position = make_tuple(dx, dy);
};


        


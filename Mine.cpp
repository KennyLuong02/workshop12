#include <iostream>
#include "GameEntity.h"
#include "Explosion.h"
#include "Mine.h"

using namespace std;

Mine::Mine(): GameEntity::GameEntity() {}

Mine::Mine(int x, int y, char i_m): GameEntity::GameEntity(x, y, 'M') {}

Explosion Mine::explode() {
    Explosion::apply(explosion);
    return explosion;
}



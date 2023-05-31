#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"

using namespace std;

Explosion::Explosion(): GameEntity::GameEntity() {setType('E');};

Explosion::Explosion(int x, int y, char e): GameEntity(x, y, 'E') {};

void Explosion::apply(GameEntity& entity) {
    GameEntity::setPos(-1, -1);
    GameEntity::setType('x');
};
#include <iostream>
#include <tuple>
#include "GameEntity.h"

using namespace std;

GameEntity::GameEntity() {
    position = make_tuple(0, 0);
    type = 'No type';
}

GameEntity::GameEntity(int x, int y, char type) {
    position = make_tuple(x, y);
    this->type = type;
}

std::tuple<int, int> GameEntity::getPos() {
    return position;
}

void GameEntity::setPos(int i_x, int i_y) {
    position = make_tuple(i_x, i_y);
}

char GameEntity::getType() {
    return type;
}

void GameEntity::setType(char i_type) {
    type = i_type;
}

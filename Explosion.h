#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <iostream>
#include "GameEntity.h"
#include "Effect.h"

using namespace std;

class Explosion: public GameEntity, Effect {
    public:
        Explosion();
        Explosion(int x, int y, char e);

        void apply(GameEntity& entity);

    private:
        
    
};
#endif
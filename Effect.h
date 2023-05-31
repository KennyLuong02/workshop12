#include <iostream>
#include "GameEntity.h"

using namespace std;

class Effect {
    public:
        virtual void apply(GameEntity& entity) = 0;
        
};

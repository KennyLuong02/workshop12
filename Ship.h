#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include "GameEntity.h"

using namespace std;

class Ship: public GameEntity {
    public:
        Ship();
        Ship(int x, int y, char s);

        void move(int dx, int dy);

    private:
        
    
};
#endif

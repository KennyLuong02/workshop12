#ifndef MINE_H
#define MINE_H
#include <iostream>
#include "GameEntity.h"
#include "Explosion.h"

using namespace std;

class Mine: public GameEntity {
    public:
        Mine();
        Mine(int x, int y, char m);

        Explosion explode(); // change mine type to X 

    private:
        Explosion explosion;
        
};
#endif
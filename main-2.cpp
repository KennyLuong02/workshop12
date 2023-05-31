#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
// #include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

using namespace std;

int main() {
    Ship s1 = Ship(1,2,'s');
    Mine m1 = Mine(3,2,'m');

    s1.move(2,3);
    //cout << m1.getPos() << endl;

    Explosion c1;
    c1.apply(s1);
    cout << s1.getType() << endl;
    
    return 0;
}
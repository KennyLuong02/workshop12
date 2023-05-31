#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
// #include "Utils.h"

using namespace std;

class A: public Effect {
    public:
        void apply(GameEntity& entity) {
            cout << "You are in apply" << endl;
        }

};

int main() {
    GameEntity game1 = GameEntity(1, 2, 'G');
    A game2;
    game2.apply(game1);
    
    return 0;
}
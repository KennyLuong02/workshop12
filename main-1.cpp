#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

using namespace std;

class A: public Effect {
    public:
        void apply(GameEntity& entity) {
            cout << "You are in apply" << endl;
        }

};

int main() {

}
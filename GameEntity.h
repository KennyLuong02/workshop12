#include <iostream>
#include <tuple>

using namespace std;

class GameEntity {
    public:
        GameEntity();
        GameEntity(int x, int y, char type);

        std::tuple<int, int> getPos();
        void setPos(int x, int y);

        char getType();
        void setType(char i_type);

    protected:
        std::tuple<int, int> position;
        char type;


};
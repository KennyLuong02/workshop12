#include <iostream>
#include <vector>
#include "GameEntity.h"
#include "Utils.h"

using namespace std;

class Game {
    public:
        Game();

        void set_entities(GameEntity& entites);
        vector<GameEntity*> get_entities();

        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);

        void gameLoop(int maxIterations, double mineDistanceThreshold);

    private:
        std::vector<GameEntity*> entities;
        int numShips;
        int numMines; 
        int gridWidth;
        int gridHeight;
        int maxIterations;
        double mineDistanceThreshold;
        
};

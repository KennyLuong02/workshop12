#include <iostream>
#include "GameEntity.h"

using namespace std;

class Utils {
    public:
        static std::tuple<int, int> generateRandomPos(int gridwidth, int gridHeight);
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
        
    private:
        
};

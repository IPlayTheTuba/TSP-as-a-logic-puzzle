#ifndef PointMAPGENERATOR_H
#define PointMAPGENERATOR_H

#include <random>
#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\PointMap.h"

class PointMapGenerator {
    private:
        int seed;
    public:
        PointMapGenerator();
        PointMapGenerator(int seed);
        ~PointMapGenerator();
        PointMap generate(int size, double lower_bound, double upper_bound);
};

#endif
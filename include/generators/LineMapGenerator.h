#ifndef LINEMAPGENERATOR_H
#define LINEMAPGENERATOR_H

#include <random>
#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\structures\LineMap.h"
#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\structures\PointMap.h"

class LineMapGenerator {
    private:
        int seed;
    public:
        LineMapGenerator();
        ~LineMapGenerator();
        LineMap generate(PointMap pointMap);
};

#endif
#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\generators\LineMapGenerator.h"

LineMapGenerator::LineMapGenerator() {

}

LineMapGenerator::~LineMapGenerator() {

}

LineMap LineMapGenerator::generate(PointMap pointMap) {
    LineMap lineMap;
    for(int i = 0; i < pointMap.size(); i++) {
        for(int l = i; l < pointMap.size(); l++) {
            Line line(pointMap.get(i), pointMap.get(l));
            lineMap.add(line);
        }
    }
    return lineMap;
}

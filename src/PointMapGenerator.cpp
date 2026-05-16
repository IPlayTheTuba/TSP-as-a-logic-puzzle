#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\PointMapGenerator.h"

PointMapGenerator::PointMapGenerator() {

}

PointMapGenerator::PointMapGenerator(int seed) {

}

PointMapGenerator::~PointMapGenerator() {

}

PointMap PointMapGenerator::generate(int size, double lower_bound, double upper_bound) {
    PointMap output;
    std::uniform_real_distribution<double> unif(lower_bound,upper_bound);
    std::default_random_engine re;
    re.seed(seed);
    for(int i = 0; i < size; i++) {
        Point p(unif(re), unif(re));
        output.add(p);
    }
}

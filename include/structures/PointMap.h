#ifndef POINTMAP_H
#define POINTMAP_H

#include <vector>
#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\structures\Point.h"

class PointMap {
    private: 
        std::vector<Point> points;
    public:
        PointMap();
        PointMap(std::vector<Point> points);
        ~PointMap();
        int size();
        Point get(int index);
        void set(int index, Point point);
        void add(Point);
        void remove(int index);
        void clear();
};

#endif
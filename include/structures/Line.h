#ifndef LINE_H
#define LINE_H

#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\structures\Point.h"
#include <string>
#include <cmath>
class Line {
    private:
        Point point1;
        Point point2;
        double weight;
    public:
        Line(Point point1, Point point2);
        ~Line();
        Point getPoint1();
        Point getPoint2();
        double calculateDistance();
        double getWeight();
        void setWeight(double weight);
        std::string toString();
};

#endif
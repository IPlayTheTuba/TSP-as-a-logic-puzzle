#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\structures\Point.h"

Point::Point() { }

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::~Point() {
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

std::string Point::toString() {
    return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
}
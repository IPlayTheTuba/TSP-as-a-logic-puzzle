#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\Line.h"

Line::Line(Point point1, Point point2) {
    this->point1 = point1;
    this->point2 = point2;
}

Point Line::getPoint1() {
    return point1;
}

Point Line::getPoint2() {
    return point2;
}

double Line::getWeight() {
    return weight;
}

void Line::setWeight(double weight){
    this->weight = weight;
}

std::string Line::toString() {
    return '(' + point1.toString() + ", " + point2.toString() + ')';
}
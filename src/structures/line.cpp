#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\structures\Line.h"

Line::Line(Point point1, Point point2) {
    this->point1 = point1;
    this->point2 = point2;
    weight = calculateDistance();
}

Line::~Line() {
}

Point Line::getPoint1() {
    return point1;
}

Point Line::getPoint2() {
    return point2;
}

double Line::calculateDistance() {
    return sqrt((point1.getX()-point2.getX())*(point1.getX()-point2.getX()) + (point1.getY()-point2.getY())*(point1.getY()-point2.getY()));
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
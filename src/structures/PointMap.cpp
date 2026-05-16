#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\structures\PointMap.h"


PointMap::PointMap() {

}

PointMap::PointMap(std::vector<Point> points) {
    this->points = points;
}

PointMap::~PointMap() {
    
}

int PointMap::size() {
    return points.size();
}

Point PointMap::get(int index) {
    return points.at(index);
}

void PointMap::set(int index, Point point) {
    points.assign(index, point);
}

void PointMap::add(Point point) {
    points.push_back(point);
}

void PointMap::remove(int index) {
    points.erase(points.begin() + index);
}

void PointMap::clear() {
    points.clear();
}
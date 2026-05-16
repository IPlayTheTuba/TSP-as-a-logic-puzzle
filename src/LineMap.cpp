#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\LineMap.h"


LineMap::LineMap() {
    totalWeight = 0;
}

LineMap::LineMap(std::vector<Line> Lines) {
    this->lines = Lines;
}

LineMap::~LineMap() {
    
}

int LineMap::size() {
    return lines.size();
}

Line LineMap::get(int index) {
    return lines.at(index);
}

double LineMap::getWeight(int index) {
    return lines.at(index).getWeight();
}

double LineMap::getTotalWeight() {
    calculateTotalWeight();
    return totalWeight;
}

double LineMap::calculateTotalWeight() {
    totalWeight = 0;
    for(Line l : lines) {
        totalWeight += l.getWeight();
    }
    return totalWeight;
}

void LineMap::set(int index, Line Line) {
    lines.assign(index, Line);
}

void LineMap::add(Line Line) {
    lines.push_back(Line);
}

void LineMap::remove(int index) {
    lines.erase(lines.begin() + index);
}

void LineMap::clear() {
    lines.clear();
}
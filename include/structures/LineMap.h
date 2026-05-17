#ifndef LINEMAP_H
#define LINEMAP_H

#include <vector>
#include <Line.h>

class LineMap {
    private: 
        std::vector<Line> lines;
        double totalWeight;
    public:
        LineMap();
        LineMap(std::vector<Line> lines);
        ~LineMap();
        int size();
        Line get(int index);
        double getWeight(int index); 
        double getTotalWeight();
        double calculateTotalWeight();
        void set(int index, Line lines);
        void add(Line);
        void remove(int index);
        void clear();
};

#endif
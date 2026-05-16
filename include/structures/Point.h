#ifndef POINT_H
#define POINT_H

#include <string>
class Point {
    private:
        double x;
        double y;
    public:
        Point();
        Point(double x, double y);
        ~Point();
        double getX();
        double getY();
        std::string toString();
};

#endif
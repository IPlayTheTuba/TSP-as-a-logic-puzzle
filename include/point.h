#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
class point {
    private:
        int x;
        int y;
    public:
        point(int x, int y);
        int getX();
        int getY();
        std::string toString();
};

#endif
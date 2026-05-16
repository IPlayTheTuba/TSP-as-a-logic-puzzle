#include <iostream>
#include <random>
#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\point.h"
#include "C:\Users\grayt\Documents\TSP-as-a-logic-puzzle\include\line.h"
using namespace std;




int main() {
    Point p1(4.9, 5.0);
    Point p2(4.6, 5.4);

    Line l(p1, p2);
    cout << l.toString() << endl;
    int x = 0;
    cin >> x;
    double lower_bound = 0;
    double upper_bound = 10000;
    uniform_real_distribution<double> unif(lower_bound,upper_bound);
    default_random_engine re;
    re.seed(24562346);
    cout << unif(re) << endl;
    cout << x;
    return 0;
  
}//g++ -o TSP-as-a-logic-puzzle.exe src/main.cpp src/Point.cpp src/Line.cpp
/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on April 18, 2015, 4:41 PM
 */

#include <iostream>

using namespace std;

class Area {
protected:

    double areaCaltulator(double a, double b) {
        return a*b;
    }

};

class Perimeter {
protected:

    double perimeterCalculator(double a, double b) {
        return 2 * (a + b);
    }

};

class Rectangle : Area, Perimeter {
private:
    double a;
    double b;

public:

    Rectangle(double a, double b) : a(a), b(b) {

    }

    double getArea() {
        return areaCaltulator(a, b);
    }

    double getPerimeter() {
        return perimeterCalculator(a, b);
    }

};

/*
 * 
 */
//int main(int argc, char** argv) {
//
//    Rectangle rec(2, 6);
//
//    cout << rec.getArea() << endl;
//    cout << rec.getPerimeter() << endl;
//
//
//    return 0;
//}


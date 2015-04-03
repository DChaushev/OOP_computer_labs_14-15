/* 
 * File:   Triangle.h
 * Author: Dimitar
 *
 * Created on March 30, 2015, 1:17 PM
 */

#ifndef TRIANGLE_H
#define	TRIANGLE_H

#include "Point.h"

class Triangle {
public:
    Triangle(Point A, Point B, Point C);
    Triangle(const Triangle& orig);
    virtual ~Triangle();

    double getArea();
    double getPerimeter();

    friend std::ostream& operator<<(std::ostream& os, const Triangle& t);

    Point getA() const {
        return A;
    }

    void setA(Point A) {
        this->A = A;
        updateSides();
    }

    Point getB() const {
        return B;
    }

    void setB(Point B) {
        this->B = B;
        updateSides();
    }

    Point getC() const {
        return C;
    }

    void setC(Point C) {
        this->C = C;
        updateSides();
    }


private:
    Point A;
    Point B;
    Point C;
    double sideA;
    double sideB;
    double sideC;

    void updateSides();
    double getDistance(const Point& p1, const Point& p2);
};

#endif	/* TRIANGLE_H */


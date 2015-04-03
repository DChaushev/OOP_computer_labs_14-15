/* 
 * File:   Point.h
 * Author: Dimitar
 *
 * Created on March 30, 2015, 1:12 PM
 */

#ifndef POINT_H
#define	POINT_H
#include <iostream>

class Point {
public:
    Point();
    Point(double x, double y);
    Point(const Point& orig);
    virtual ~Point();

    double GetX() const {
        return x;
    }

    void SetX(double x) {
        this->x = x;
    }

    double GetY() const {
        return y;
    }

    void SetY(double y) {
        this->y = y;
    }

    static double calculateDistance(const Point& p1, const Point& p2);

    friend std::ostream& operator<<(std::ostream& os, const Point& p);

private:
    double x;
    double y;
};

#endif	/* POINT_H */


/* 
 * File:   Point.cpp
 * Author: Dimitar
 * 
 * Created on March 30, 2015, 1:12 PM
 */

#include "math.h"
#include "Point.h"

Point::Point() : x(0), y(0) {
}

Point::Point(const Point& orig) : x(orig.x), y(orig.y) {
}

Point::Point(double x, double y) : x(x), y(y) {
}

Point::~Point() {
}

double Point::calculateDistance(const Point& p1, const Point& p2) {
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}






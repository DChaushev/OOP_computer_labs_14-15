/* 
 * File:   Triangle.cpp
 * Author: Dimitar
 * 
 * Created on March 30, 2015, 1:17 PM
 */
#include "math.h"
#include "Triangle.h"

Triangle::Triangle(Point A, Point B, Point C) : A(A), B(B), C(C) {
    updateSides();
}

Triangle::Triangle(const Triangle& orig) : A(orig.A), B(orig.B), C(orig.C) {
    updateSides();
}

Triangle::~Triangle() {
}

void Triangle::updateSides() {
    sideA = Point::calculateDistance(B, C);
    sideB = Point::calculateDistance(A, C);
    sideC = Point::calculateDistance(A, B);
}

double Triangle::getPerimeter() const {
    return sideA + sideB + sideC;
}

double Triangle::getArea() const {
    double p = getPerimeter() / 2;
    double area = sqrt(p * (p - sideA)*(p - sideB)*(p - sideC));
    return area;
}

std::ostream& operator<<(std::ostream& os, const Triangle& t) {
    os << "A: " << t.A << std::endl;
    os << "B: " << t.B << std::endl;
    os << "C: " << t.C;
    return os;
}
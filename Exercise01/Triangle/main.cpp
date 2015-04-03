/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on March 29, 2015, 7:31 PM
 */

#include "Point.h"
#include "Triangle.h"

using namespace std;

/*
 * Задача 2:
 * Реализирайте клас Triangle, който се състой от 3 точки(Point).
 * Направете методи getArea() и getPerimeter(), който да изчисляват и връщат
 * съответно лицето и периметъра на триъгълника.
 * 
 * Решете задачата като използвате добра капсулация(encapsulation - скриване на 
 * данните/имплементацията).
 */
int main() {

    Point p1(1, 3);
    Point p2(3, -1);
    Point p3(-2, -2);

    Triangle t(p1, p2, p3);
    cout << t << endl;
    cout << "Area: " << t.getArea() << endl;
    cout << "Perimeter: " << t.getPerimeter() << endl;

    cout << "----------" << endl;

    t.setB(Point(10, -10));
    cout << t << endl;
    cout << "Area: " << t.getArea() << endl;
    cout << "Perimeter: " << t.getPerimeter() << endl;

    return 0;
}


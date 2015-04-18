/* 
 * File:   example03.cpp
 * Author: Dimitar
 *
 * Created on April 18, 2015, 5:10 PM
 */

#include <iostream>

using namespace std;

class A {
public:

    A() {
        cout << "A constructor" << endl;
    }

    void display() {
        cout << "A" << endl;
    }
};

class B : public A {
public:

    B() {
        cout << "B constructor" << endl;
    }

    void display() {
        cout << "B" << endl;
    }
};

class C : public A {
public:

    C() {
        cout << "C constructor" << endl;
    }

    void display() {
        cout << "C" << endl;
    }
};

class D : public B, public C {
public:

    D() {
        cout << "D constructor" << endl;
    }

    void display() {
        cout << "D" << endl;
    }

};

/*
 * 
 */
int main(int argc, char** argv) {

    D d;

    d.display();
    d.B::display();
    d.C::display();

    return 0;
}


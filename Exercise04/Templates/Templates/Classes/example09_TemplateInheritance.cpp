/* 
 * File:   example09_TemplateInheritance.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 4:15 PM
 */

#include <iostream>

using namespace std;

template<typename T>
class Number {
protected:
    T value;
public:

    Number() {
        value = 0;
    }

    Number(T value) : value(value) {
    }

    T getValue() {
        return this->value;
    }

    virtual void setValue(T newValue) {
        this->value = newValue;
    }
};

template<typename T>
class PositiveNumber : public Number<T> {
public:

    PositiveNumber(T value) {
        this->setValue(value);
    }

    void setValue(T newValue) {
        if (newValue > 0)
            Number<T>::setValue(newValue);
        else
            Number<T>::setValue(-newValue);
    }
};

/*
 * 
 */
int main() {

    Number<int> * c = new PositiveNumber<int>(6);

    cout << c->getValue() << endl;

    c->setValue(-8);

    cout << c->getValue() << endl;

    return 0;
}


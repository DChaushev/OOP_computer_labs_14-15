/* 
 * File:   Dog.cpp
 * Author: Dimitar
 * 
 * Created on April 4, 2015, 4:46 PM
 */

#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog() {
}

Dog::Dog(std::string name) : Animal(name) {
    cout << "Dog constructor" << endl;
}

Dog::Dog(const Dog& other) : Animal(other.name) {
}

Dog::~Dog() {
    cout << "Dog destructor" << endl;
}

void Dog::eat() {
    cout << name << " is eating..." << endl;
}

void Dog::sleep() {
    cout << name << " is sleeping..." << endl;
}

void Dog::walk() {
    cout << name << " is walking..." << endl;
}

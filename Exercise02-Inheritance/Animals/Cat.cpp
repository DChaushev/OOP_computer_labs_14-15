/* 
 * File:   Cat.cpp
 * Author: Dimitar
 * 
 * Created on April 4, 2015, 6:35 PM
 */

#include "Cat.h"

#include <iostream>
using namespace std;

Cat::Cat() {
}

Cat::Cat(std::string name) : Animal(name) {
    cout << "Cat constructor" << endl;
}

Cat::Cat(const Cat& other) : Animal(other.name) {
}

Cat::~Cat() {
    cout << "Cat destructor" << endl;
}

void Cat::eat() {
    std::cout << name << " is eating" << std::endl;
}

void Cat::sleep() {
    std::cout << name << " is sleeping" << std::endl;
}

void Cat::walk() {
    std::cout << name << " is walking" << std::endl;
}

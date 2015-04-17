/* 
 * File:   Animal.cpp
 * Author: Dimitar
 * 
 * Created on April 4, 2015, 4:42 PM
 */

#include "Animal.h"

#include <iostream>

using namespace std;

Animal::Animal() {

}

Animal::Animal(std::string name) : name(name) {
    std::cout << "Animal constructor" << endl;
}

Animal::Animal(const Animal& other) : Animal(other.name) {
}

Animal::~Animal() {
    std::cout << "Animal destructor" << endl;
}

void Animal::walk() {
    cout << "Animal walking..." << endl;
}

void Animal::eat() {
    cout << "Animal eating..." << endl;
}

void Animal::sleep() {
    cout << "Animal sleeping..." << endl;
}


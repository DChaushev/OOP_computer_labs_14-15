/* 
 * File:   Programmer.cpp
 * Author: Dimitar
 * 
 * Created on April 4, 2015, 5:18 PM
 */

#include "Programmer.h"

#include <iostream>

Programmer::Programmer(string name, Date dob, Gender sex, string tech, double salary) : Person(name, dob, sex), technology(tech), salary(salary) {
}

Programmer::Programmer(const Programmer& other) {
    Person(other.name, other.dateOfBirth, other.sex);
    technology = other.technology;
    salary = other.salary;
}

Programmer::~Programmer() {
}

/* 
 * при override-ването на метода display:
 * - извикваме display() на базовия клас, който ще покаже името, датата и пола.
 * - изпечатваме данните на клас Programmer.
 */
void Programmer::display() {
    Person::display();
    std::cout << technology << std::endl << salary << std::endl;
}


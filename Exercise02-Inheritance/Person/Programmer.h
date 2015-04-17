/* 
 * File:   Programmer.h
 * Author: Dimitar
 *
 * Created on April 4, 2015, 5:18 PM
 */

#ifndef PROGRAMMER_H
#define	PROGRAMMER_H

#include "Person.h"

class Programmer : public Person {
public:
    Programmer(string name, Date dob, Gender sex, string tech, double salary);
    Programmer(const Programmer& other);
    virtual ~Programmer();

    virtual void display();

    double getSalary() const {
        return salary;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    string getTechnology() const {
        return technology;
    }

    void setTechnology(string technology) {
        this->technology = technology;
    }

private:
    string technology;
    double salary;
};

#endif	/* PROGRAMMER_H */


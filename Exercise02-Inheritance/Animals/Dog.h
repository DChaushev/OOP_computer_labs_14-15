/* 
 * File:   Dog.h
 * Author: Dimitar
 *
 * Created on April 4, 2015, 4:46 PM
 */

#ifndef DOG_H
#define	DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    Dog(std::string name);
    Dog(const Dog& other);
    virtual ~Dog();

    virtual void sleep();
    virtual void walk();
    virtual void eat();

};

#endif	/* DOG_H */


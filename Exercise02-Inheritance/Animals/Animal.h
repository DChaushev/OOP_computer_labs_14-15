/* 
 * File:   Animal.h
 * Author: Dimitar
 *
 * Created on April 4, 2015, 4:42 PM
 */

#ifndef ANIMAL_H
#define	ANIMAL_H

#include<string>

class Animal {
    
    // protected данни - те са видими само за текущия клас и неговите наследници.
    // За всички други са като private.
protected:
    std::string name;

public:
    Animal();
    Animal(std::string name);
    Animal(const Animal& other);
    virtual ~Animal();

    std::string getName() const {
        return name;
    }

    void setName(std::string name) {
        this->name = name;
    }

    // ключовате дума virtual указва, че позволяваме на класовете наследници да 
    // override-ват методите, декларирани с нея.
    virtual void walk();
    virtual void eat();
    virtual void sleep();

};

#endif	/* ANIMAL_H */


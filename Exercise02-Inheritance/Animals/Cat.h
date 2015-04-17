/* 
 * File:   Cat.h
 * Author: Dimitar
 *
 * Created on April 4, 2015, 6:35 PM
 */

#ifndef CAT_H
#define	CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    Cat(std::string name);
    Cat(const Cat& other);
    virtual ~Cat();

    virtual void eat();
    virtual void sleep();
    virtual void walk();

};

#endif	/* CAT_H */


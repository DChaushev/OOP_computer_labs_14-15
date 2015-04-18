/* 
 * File:   User.h
 * Author: Dimitar
 *
 * Created on April 18, 2015, 8:52 PM
 */

#ifndef USER_H
#define	USER_H

#include <iostream>
#include <string>

#include "Observer.h"

class User : public Observer {
public:
    User(std::string);
    User(const User& orig);
    virtual ~User();

    virtual void notify();

private:
    std::string name;
};

#endif	/* USER_H */


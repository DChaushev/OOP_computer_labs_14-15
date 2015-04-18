/* 
 * File:   User.cpp
 * Author: Dimitar
 * 
 * Created on April 18, 2015, 8:52 PM
 */

#include "User.h"

User::User(std::string name) : name(name) {
}

User::User(const User& orig) : name(orig.name) {
}

User::~User() {
}

void User::notify() {
    std::cout << name << " has been notified!" << std::endl;
}

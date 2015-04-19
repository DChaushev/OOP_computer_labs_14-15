/* 
 * File:   NewsSite.cpp
 * Author: Dimitar
 * 
 * Created on April 18, 2015, 8:45 PM
 */

#include "NewsSite.h"

NewsSite::NewsSite(std::string name) : name(name) {
}

NewsSite::NewsSite(std::string name, const Observable& orig) : name(name), Observable(orig) {
}

NewsSite::NewsSite(const NewsSite& orig) : name(orig.name), Observable(orig) {
}

NewsSite::~NewsSite() {
}

void NewsSite::notifyObservers() {
    std::cout << name << " has news!" << std::endl;
    Observable::notifyObservers();
}


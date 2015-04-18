/* 
 * File:   Observerable.cpp
 * Author: Dimitar
 * 
 * Created on March 26, 2015, 1:49 PM
 */


#include "Observable.h"

Observable::Observable() {
}

Observable::Observable(const Observable& orig) {
    for (int i = 0; i < orig.observers.size(); i++) {
        observers.push_back(orig.observers[i]);
    }
}

Observable::~Observable() {
}

void Observable::registerObserver(Observer * o) {
    observers.push_back(o);
}

void Observable::unregisterObserver(Observer * o) {
    for (std::vector<Observer *>::iterator it = observers.begin(); it != observers.end(); ++it) {
        if (*it == o) {
            observers.erase(it);
            break;
        }
    }
}

void Observable::notifyObservers() {
    for (int i = 0; i < observers.size(); i++)
        observers[i]->notify();
}

void Observable::changeState() {
    notifyObservers();
}


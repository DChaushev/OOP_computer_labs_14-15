/* 
 * File:   Singleton.cpp
 * Author: Dimitar
 * 
 * Created on April 20, 2015, 3:26 PM
 */

#include "Singleton.h"

// at the beginning the instance is null
Singleton * Singleton::instance = nullptr;

Singleton::Singleton() {
}

/**
 * When this method is called for the first time, the instance 
 * is defined as new Singleton() and from then on it is returned.
 * 
 * This is NOT thread safe implementation!
 * 
 * @return 
 */
Singleton * Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}


/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on April 20, 2015, 10:42 AM
 */
#include "Singleton.h"
#include <iostream>

using namespace std;

/*
 * Simple Singleton (not thread safe!) example.
 * 
 */
int main(int argc, char** argv) {

    Singleton * s = Singleton::getInstance();
    Singleton * s1 = Singleton::getInstance();

    cout << (s == s1) << endl; // true

    return 0;
}


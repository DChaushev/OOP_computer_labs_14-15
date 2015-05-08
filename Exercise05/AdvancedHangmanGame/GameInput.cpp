/* 
 * File:   GameInput.cpp
 * Author: Dimitar
 * 
 * Created on May 8, 2015, 10:47 AM
 */

#include "GameInput.hpp"
#include <iostream>

GameInput::GameInput() {
}

char GameInput::getInput() {
    char c;
    std::cin >> c;
    return c;
}



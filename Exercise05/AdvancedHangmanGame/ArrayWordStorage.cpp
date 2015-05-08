/* 
 * File:   ArrayWordStorage.cpp
 * Author: Dimitar
 * 
 * Created on May 8, 2015, 10:02 AM
 */

#include <stdlib.h>

#include "ArrayWordStorage.hpp"

ArrayWordStorage::ArrayWordStorage() {
}

std::string ArrayWordStorage::getWord() {
    srand(time(NULL));
    return words[rand() % NUMBER_OF_WORDS];
}

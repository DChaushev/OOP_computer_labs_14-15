/* 
 * File:   ArrayWordStorage.cpp
 * Author: Dimitar
 * 
 * Created on May 8, 2015, 10:02 AM
 */

#include <stdlib.h>

#include "ArrayWordStorage.hpp"

ArrayWordStorage::ArrayWordStorage() {
    NUMBER_OF_WORDS = 5;
    words = new std::string[NUMBER_OF_WORDS]{
        "programming",
        "mathematics",
        "discrete",
        "analysis",
        "faculty"
    };
}

std::string ArrayWordStorage::getWord() {
    srand(time(NULL));
    return words[rand() % NUMBER_OF_WORDS];
}

/* 
 * File:   FilesWordStorage.cpp
 * Author: Dimitar
 * 
 * Created on May 29, 2015, 10:21 AM
 */

#include "FilesWordStorage.hpp"
#include <fstream>
#include <stdexcept>
#include <vector>
#include <stdlib.h>

FilesWordStorage::FilesWordStorage(std::string fileName) :
fileName(fileName) {

    srand(time(NULL));

    std::ifstream wordsFile(fileName.c_str());
    if (wordsFile.is_open()) {
        std::string line;
        while (!wordsFile.eof()) {
            getline(wordsFile, line);
            words.push_back(line.substr(0, line.length() - 1));
        }
        wordsFile.close();
    } else {
        throw std::invalid_argument("No such file: " + fileName);
    }

}

std::string FilesWordStorage::getWord() {
    return words[rand() % words.size()];
}



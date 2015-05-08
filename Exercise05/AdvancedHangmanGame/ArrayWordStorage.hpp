/* 
 * File:   ArrayWordStorage.hpp
 * Author: Dimitar
 *
 * Created on May 8, 2015, 10:02 AM
 */

#ifndef ARRAYWORDSTORAGE_HPP
#define	ARRAYWORDSTORAGE_HPP

#include "WordStorage.hpp"

class ArrayWordStorage : public WordStorage {
public:
    ArrayWordStorage();

    virtual std::string getWord();


private:
    const int NUMBER_OF_WORDS = 5;
    const std::string words[NUMBER_OF_WORDS] = {
        "programming",
        "mathematics",
        "discrete",
        "analysis",
        "faculty"
    };
};

#endif	/* ARRAYWORDSTORAGE_HPP */


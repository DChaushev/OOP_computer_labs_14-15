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
    int NUMBER_OF_WORDS;
    std::string * words;
};

#endif	/* ARRAYWORDSTORAGE_HPP */


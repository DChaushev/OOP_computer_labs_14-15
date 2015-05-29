/* 
 * File:   FilesWordStorage.hpp
 * Author: Dimitar
 *
 * Created on May 29, 2015, 10:21 AM
 */

#ifndef FILESWORDSTORAGE_HPP
#define	FILESWORDSTORAGE_HPP

#include "WordStorage.hpp"
#include <vector>

class FilesWordStorage : public WordStorage {
public:

    FilesWordStorage(std::string fileName);

    virtual std::string getWord();

private:
    std::string fileName;
    std::vector<std::string> words;
};

#endif	/* FILESWORDSTORAGE_HPP */


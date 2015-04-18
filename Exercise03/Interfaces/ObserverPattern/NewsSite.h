/* 
 * File:   NewsSite.h
 * Author: Dimitar
 *
 * Created on April 18, 2015, 8:45 PM
 */

#ifndef NEWSSITE_H
#define	NEWSSITE_H

#include <iostream>
#include <string>

#include "Observable.h"

class NewsSite : public Observable {
public:
    NewsSite(std::string);
    NewsSite(std::string name, const Observable& orig);
    NewsSite(const NewsSite& orig);
    virtual ~NewsSite();

    void changeState();

private:
    std::string name;
};

#endif	/* NEWSSITE_H */


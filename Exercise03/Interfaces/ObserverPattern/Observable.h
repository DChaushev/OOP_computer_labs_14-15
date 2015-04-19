/* 
 * File:   Observerable.h
 * Author: Dimitar
 *
 * Created on March 26, 2015, 1:49 PM
 */

#ifndef OBSERVERABLE_H
#define	OBSERVERABLE_H
#include <vector>
#include "Observer.h"

class Observable {
public:
    Observable();
    Observable(const Observable& orig);
    virtual ~Observable();

    void registerObserver(Observer * o);
    void unregisterObserver(Observer * o);
    virtual void notifyObservers();

private:
    std::vector<Observer*> observers;
};

#endif	/* OBSERVERABLE_H */


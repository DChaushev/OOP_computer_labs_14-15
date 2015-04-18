/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on March 26, 2015, 1:59 PM
 */

#include <iostream>
#include <string>

#include "Observer.h"
#include "Observable.h"

using namespace std;

class MyObserver : public Observer {
private:
    string name;

public:

    MyObserver(string name) : name(name) {
    }

    void notify() {
        cout << name << " notified!" << endl;
    }

};

class MyObserverable : public Observable {
private:
    string name;
public:

    MyObserverable(string name) : name(name), Observable() {
    }

    MyObserverable(string name, const Observable& o) : name(name), Observable(o) {
    }

    void changeState() {
        cout << name << " changing state!" << endl;
        Observable::changeState();
    }

};

int main() {


    Observable* o = new MyObserverable("Observable");
    Observer* o1 = new MyObserver("Observer 1");
    Observer* o2 = new MyObserver("Observer 2");

    o->registerObserver(o1);
    o->registerObserver(o2);
    o->changeState();

    Observable* newObs = new MyObserverable("new Observable", *o);

    o->unregisterObserver(o1);
    o->changeState();
    newObs->changeState();

    return 0;
}


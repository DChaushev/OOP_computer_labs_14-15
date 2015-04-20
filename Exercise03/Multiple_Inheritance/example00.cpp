/* 
 * File:   example00.cpp
 * Author: Dimitar
 *
 * Created on April 19, 2015, 11:19 PM
 */

#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;

public:

    Human(string name) :
    name(name) {
    }

    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

};

class Programmer {
private:
    double salary;
    string tech;

public:

    Programmer(double salary, string tech) :
    salary(salary), tech(tech) {
    }

    double getSalary() const {
        return salary;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    string getTech() const {
        return tech;
    }

    void setTech(string tech) {
        this->tech = tech;
    }

};

class Student : public Human, public Programmer {
private:
    int fn;

public:

    Student(string name, int fn, double salary, string tech) :
    Human(name), Programmer(salary, tech), fn(fn) {
    }

    int getFn() const {
        return fn;
    }

    void setFn(int fn) {
        this->fn = fn;
    }

};

/*
 * 
 */
//int main(int argc, char** argv) {
//
//    Student * s = new Student("Ivan", 61569, 2000.50, "C++");
//
//    cout << s->getName() << endl;
//    cout << s->getFn() << endl;
//    cout << s->getSalary() << endl;
//    cout << s->getTech() << endl;
//
//
//    return 0;
//}


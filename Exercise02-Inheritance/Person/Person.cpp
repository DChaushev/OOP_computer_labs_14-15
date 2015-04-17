/* 
 * File:   Person.cpp
 * Author: Dimitar
 * 
 * Created on April 4, 2015, 5:01 PM
 */

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person() : name(""), dateOfBirth({0, 0, 0}), sex(MALE) {
}

Person::Person(string name, Date dateOfBirth, Gender sex) : name(name), dateOfBirth(dateOfBirth), sex(sex) {
}

Person::Person(const Person& other) {
    name = other.name;
    dateOfBirth = other.dateOfBirth;
    sex = other.sex;
}

Person::~Person() {
}

void Person::display() {
    cout << name << ((sex == MALE) ? ", Male" : ", Female") << endl;
    cout << dateOfBirth.day << "." << dateOfBirth.month << "." << dateOfBirth.year << endl;
}

void Person::addFriend(Person* p) {
    friends.push_back(p);
}

void Person::showFriends() {
    if (friends.size() != 0) {
        cout << name << "'s friends: ";
        cout << friends[0]->name;
        for (int i = 1; i < friends.size(); i++) {
            cout << ", " << friends[i]->name;
        }
        cout << endl;
    } else {
        cout << name << " has no friends..." << endl;
    }
}



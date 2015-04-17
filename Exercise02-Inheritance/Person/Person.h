/* 
 * File:   Person.h
 * Author: Dimitar
 *
 * Created on April 4, 2015, 5:01 PM
 */

#ifndef PERSON_H
#define	PERSON_H

#include <vector>
#include <string>

#include "Date.h"
#include "Gender.h"

using namespace std;

class Person {
public:
    Person();
    Person(string name, Date dateOfBirth, Gender sex);
    Person(const Person& other);
    virtual ~Person();

    virtual void display();

    void addFriend(Person* p);
    void showFriends();

    Date getDateOfBirth() const {
        return dateOfBirth;
    }

    void setDateOfBirth(Date dateOfBirth) {
        this->dateOfBirth = dateOfBirth;
    }

    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    Gender getSex() const {
        return sex;
    }

    void setSex(Gender sex) {
        this->sex = sex;
    }

    /*
     За датата сме направили проста структура, която съдържа три целочислени променливи
     за ден, месец и година.

     Полът е енумерация.
     Другото упражнение ще ги покажем.
     За любопитните:
        http://en.cppreference.com/w/cpp/language/enum
     */
protected:
    string name;
    Date dateOfBirth;
    Gender sex;

private:
    vector<Person*> friends; // Приятелите ще преставим като масив от пойнтери
                             // към обекти от клас Person => приятел може да ни е
                             // обект от всеки клас, който наследява Person.
};

#endif	/* PERSON_H */


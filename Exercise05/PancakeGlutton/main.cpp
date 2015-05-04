/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on May 3, 2015, 9:41 PM
 */

#include <iostream>
#include <algorithm>

using namespace std;

/**
 * This is a modification of this task:
 * 
 * Write a program that asks the user to enter the number of pancakes eaten for
 * breakfast by n different people (Person 1, Person 2, ..., Person n).
 * 
 * Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
 * i.e.
 * Person 4: ate 10 pancakes
 * Person 3: ate 7 pancakes
 * Person 1: ate 4 pancakes
   ...
 * Person 5: ate 0 pancakes
 * 
 * Our solution is to create a class Person that has an id number and number of
 * pancakes eaten.
 * 
 * Then we predefine the operator< so we can sort them by number of pancakes eaten.
 * 
 * But notice that the output is in reverse order (high to low).
 * We can do it by two ways:
 * - we can print the sorted array from back to front.
 * - or the one we actualy does - sort them in decreasing order.
 * 
 * We can use the sort from <algorithm>, and pass it 'std::greater<Person>()'.
 * ( for visual studio you will need to #include <functional> )
 * You will notice that this requires predefined operator> to work.
 * So we predefine it also.
 * 
 */
class Person {
public:
    Person();
    Person(int pancakes, int number);
    Person(const Person& other);
    virtual ~Person();

    int getPancakesEaten() const;
    void setPancakesEaten(int pancakesEaten);

    bool operator<(const Person & other) const;
    bool operator>(const Person & other) const;

    int getNumber() const;

private:
    int number;
    int pancakesEaten;
};

Person::Person() : pancakesEaten(0), number(0) {
}

Person::Person(int pancakes, int number) : pancakesEaten(pancakes), number(number) {
}

Person::Person(const Person& other) : pancakesEaten(other.pancakesEaten), number(other.number) {
}

Person::~Person() {
}

int Person::getPancakesEaten() const {
    return pancakesEaten;
}

void Person::setPancakesEaten(int pancakesEaten) {
    this->pancakesEaten = pancakesEaten;
}

int Person::getNumber() const {
    return this->number;
}

bool Person::operator<(const Person& other) const {
    return this->pancakesEaten < other.pancakesEaten;
}

bool Person::operator>(const Person& other) const {
    return this->pancakesEaten > other.pancakesEaten;
}

void displayPeople(Person people[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Person " << people[i].getNumber() << ": " << people[i].getPancakesEaten() << " pancakes eaten." << endl;
    }
}

int main() {

    int n = 5;

    Person people[n];

    for (int i = 0; i < n; i++) {
        int pancakes;
        cout << "Enter pancakes for person " << i + 1 << ": ";
        cin >> pancakes;
        people[i] = Person(pancakes, i + 1);
    }

    sort(people, people + n, std::greater<Person>());

    displayPeople(people, n);

    return 0;
}


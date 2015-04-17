/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on April 4, 2015, 5:01 PM
 */

#include <iostream>

#include "Person.h"
#include "Programmer.h"

using namespace std;

/*
 * Не е същата задача, която разгледахме на упражнението. Онази много приличаше
 * на задачата с животните. Тази е по-интересна:
 * 
 * Направили сме един клас Person, и негов наследник - class Programmer
 * 
 * Person има член данни:
 * - дата на раждане
 * - име
 * - пол
 * - списък с приятели!!! :)
 * - метод display()
 * - метод addFriend(Person* p);
 * - метод showFriends();
 * 
 * Programmer добавя:
 * - някаква технология
 * - заплата
 * - overrides метода display();
 * 
 */
int main() {

    Person* person1 = new Person("Ivan",{12, 04, 1992}, MALE);
    person1->display();
    cout << endl;

    Programmer* programmer = new Programmer("Spas",{21, 12, 1990}, MALE, "Java", 3540.5);
    programmer->display();
    cout << endl;

    Person* person2 = new Person("Peter",{31, 12, 2000}, MALE);
    person2->display();
    cout << endl;

    person1->addFriend(person2);
    person1->addFriend(programmer); // Тъй като programmer наследява Person можем да го добавим
                                    // като приятел. Polimorphism!

    person1->showFriends();

    delete person1;
    delete person2;
    delete programmer;

    return 0;
}


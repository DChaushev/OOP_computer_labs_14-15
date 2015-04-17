/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on April 4, 2015, 4:44 PM
 */

#include <iostream>

//Както include-ваме iostream, string и т.н. библиотеки, така си включваме в проекта и
//дефинираните от нас класове:

//header файла на class Animal
#include "Animal.h" // този хедър може да се изпусне, тъй като бива включен в хедърите на Cat & Dog
                    // т.e. include-ването става рекурсивно.
//header файла на class Dog
#include "Dog.h"
//header файла на class Cat
#include "Cat.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Създаваме си по един обект от всеки от класовете.
    //Като изпълним програмата може да видим в какъв ред се викат конструктурите.


    //Когато си декларираме обеките по този начин:
    // <base_class> * <name> = new <class>(<arguments>);
    // Можем да викаме методи, които са дефинирани само в базовия клас - в случая Animal.
    cout << "Creating an animal: " << endl;
    cout << "-------------" << endl;
    Animal* animal = new Animal("Animal");
    cout << "=============" << endl;

    cout << "Creating a dog: " << endl;
    cout << "-------------" << endl;
    Animal* dog = new Dog("Johnny");
    cout << "=============" << endl;

    cout << "Creating a cat: " << endl;
    cout << "-------------" << endl;
    Animal* cat = new Cat("Tiger");
    cout << "=============" << endl;

    //Полиморфизма ни позволява да групираме обекти от различни класове, но наследници на
    //общ клас - в случая Animal.
    Animal * animals[] = {animal, dog, cat};

    for (int i = 0; i < 3; i++) {
        (*(animals + i))->eat(); // (*(animals + i)) е същото като animals[i], тъй като името на масива просто е указател към 1вия му елемент.
        animals[i]->sleep();
        animals[i]->walk();
        cout << endl;
    }

    //Когато създаме пойнтери към обекти (Animal*) - трябва сами да се грижим за почистването
    //на паметта. Затова в случая викаме detele на трита обекта, което ще извика техните деструктори.
    delete animal;
    delete dog;
    delete cat;

    return 0;
}


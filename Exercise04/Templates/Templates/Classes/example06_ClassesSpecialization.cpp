/* 
 * File:   example06_ClassesSpecialization.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 2:45 PM
 */

#include <iostream>

using namespace std;

template<class T>
class Container {
private:
    T element;
public:

    Container(T element) : element(element) {
    }

    T increase() {
        return ++element;
    }
};

/*
 * Let's say the upper class is logical for numbers, but what if we want to use
 * char?
 * Increase the character looks strange. 
 * 
 * So we can specialize this class for chars, which means we make different implementation
 * which will be used when the class is instantiated with char.
 */
template<>
class Container<char> {
private:
    char element;
public:

    Container(char c) : element(c) {
    }

    char uppercase() {
        if (element >= 'a' && element <= 'z')
            element += 'A' - 'a';
        return element;
    }

};

/*
 * 
 */
int main(int argc, char** argv) {

    Container<int> cInt(1);
    cout << cInt.increase() << endl;
    cout << cInt.increase() << endl;
    cout << cInt.increase() << endl;

    cout << endl;

    Container<double> cDouble(1.5);
    cout << cDouble.increase() << endl;
    cout << cDouble.increase() << endl;
    cout << cDouble.increase() << endl;

    cout << endl;

    Container<char> cChar('c');
    cout << cChar.uppercase() << endl;

    return 0;
}


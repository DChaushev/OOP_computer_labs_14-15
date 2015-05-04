/* 
 * File:   example07_ClassesSeparateImpl.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 3:32 PM
 */

#include <iostream>

using namespace std;

template<typename T>
class Foo {
private:
    T element;

public:
    Foo(T element);

    void setElement(T value);
    T getElement();

    template<typename U>
    bool Bar(U other);

};

template<typename T>
Foo<T>::Foo(T element) : element(element) {

}

template<typename T>
void Foo<T>::setElement(T value) {
    element = value;
}

template<typename T>
T Foo<T>::getElement() {
    return element;
}

template<typename T>
template<typename U>
bool Foo<T>::Bar(U other) {
    return (element == other);
}

/*
 * 
 */
//int main(int argc, char** argv) {
//
//    Foo<int> c(10);
//
//    cout << c.Bar(10.5) << endl;
//    cout << c.Bar(10) << endl;
//
//    return 0;
//}
//

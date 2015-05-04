/* 
 * File:   example05_Classes.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 2:30 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * As with the functions, we can create templates for classes
 */
template<typename T>
class Pair {
private:
    T first;
    T second;
public:

    Pair(T f, T s) : first(f), second(s) {
    }

    T getFirst() {
        return first;
    }

    T getSecond() {
        return second;
    }

    void setFirst(T f) {
        first = f;
    }

    void setSecond(T s) {
        second = s;
    }
};

/*
 * 
 */
//int main(int argc, char** argv) {
//    
//    Pair<int>* p = new Pair<int>(1, 2);
//    
//    Pair<int> pInt(1, 2);
//    Pair<double> pDouble(1.65, 2.35);
//    Pair<string> pStr("ivan", "pesho");
//
//    cout << pInt.getFirst() << endl;
//
//    cout << pStr.getSecond() << endl;
//
//    return 0;
//}


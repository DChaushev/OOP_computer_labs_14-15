/* 
 * File:   example02_FunctionTemplates.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 12:20 PM
 */

#include <iostream>

using namespace std;

/*
 * Templates can also have multiple template parameters.
 */
template <typename T, typename U>
bool areEqual(T a, U b) {
    return (a == b);
}

/*
 * 
 */
int main() {

    cout << areEqual(10, 10.0) << endl;

    //It is not necessary T and U to be from different types:
    int a = 5, b = 5;
    cout << areEqual(a, b) << endl;

    return 0;
}


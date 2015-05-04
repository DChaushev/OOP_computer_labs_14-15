/* 
 * File:   example03_FunctionTemplates.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 12:27 PM
 */

#include <iostream>

using namespace std;

/*
 * The templates can also include expressions of a particular type.
 * They cannot be double, float and other classes.
 * 
 * N can also have default value.
 */
template<typename T, int N = 1 >
T multiply(T x) {
    return x * N;
}

template<int N, typename T>
T divide(T x) {
    return x / N;
}

/*
 * 
 */
//int main() {
//
//    cout << multiply<int, 5>(10) << endl;
//    cout << multiply<double, 5>(1.5) << endl;
//
//    // When the template first takes the particular type, you can skip the
//    // explicit type declaration:
//    cout << divide<5>(10) << endl;
//
//    return 0;
//}


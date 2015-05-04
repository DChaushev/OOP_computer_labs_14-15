/* 
 * File:   example01_FunctionTemplate.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 11:58 AM
 */

#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

/*
 * You can also use T as return type.
 */

/*
 * You can also declare local variable of type T.
 */
template<typename T, int N = 0>
T sumWithVariable(T a, T b) {
    T result = a + b + N;
    return result;
}

/*
 * 
 */
//int main(int argc, char** argv) {
//
//    cout << sum(10, 20) << endl;
//    cout << sum(1.0, 1.5) << endl;
//
//
//    /*
//     * When using T as return Type, you must specify the exact type
//     * when calling the function:
//     */
//    cout << sumWithVariable<int>(10, 20) << endl;
//    cout << sumWithVariable<double>(1.0, 1.5) << endl;
//    //Does this look familiar? (vector, stack, queue...)
//
//    //You can skip the explicit declaration:
//    cout << sumWithVariable<int, 6>(10, 30) << endl;
//
//    return 0;
//}


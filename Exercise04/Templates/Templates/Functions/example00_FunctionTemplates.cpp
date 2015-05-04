/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 11:19 AM
 */

#include <iostream>

using namespace std;

/*
 * This function prints all the elements from an INT array.
 */
void printArray(const int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;
}

/*
 * This function does the same, but for DOUBLE array.
 * As we can see, the implementation of the both functions is the same.
 * Isn't there a way to reuse this code for both int and double?
 */
void printArray(const double a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;
}

/*
 * Let me introduce you to C++ Templates!
 * 
 * You just have to annotate the function with
 * template<typename T>
 * 
 * It can be 'class' instead of 'typename':
 * template<class T>
 * It is the same
 * 
 * And T becomes some type for the given function.
 * The compiler will instantiate different function for the corresponding type
 * when the function is called.
 * 
 * Thus, we can reuse our code for different types.
 */
template<typename T>
void print(const T a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;
}

/*
 * 
 */
//int main() {
//
//    int a[] = {1, 2, 3, 4, 5};
//    double d[] = {1.23, 5.21, 6.23, 7.23};
//
//
////    printArray(a, 5);
////    printArray(d, 4);
//
//    print(a, 5);
//    print(d, 4);
//
//    return 0;
//}




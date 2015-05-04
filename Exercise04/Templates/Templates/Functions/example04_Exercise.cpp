/* 
 * File:   example04_Exercise.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 12:33 PM
 */

#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
void insertionSort(T A[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && A[j - 1] > A[j]) {
            swap(A[j], A[j - 1]);
            j = j - 1;
        }
    }
}

/*
 * 
 */
//int main(int argc, char** argv) {
//
//    int a[] = {1, 6, 2, 3, 8, 9, 5, 2, 0};
//    float d[] = {5.4, 6.7, 0.3, 1.6, 7.8, 1.5};
//
//    insertionSort(a, 9);
//    insertionSort(d, 6);
//
//    for (auto i : a) {
//        cout << i << " ";
//    }
//    cout << endl;
//    
//    for (auto i : d) {
//        cout << i << " ";
//    }
//
//    return 0;
//}


/* 
 * File:   example04_Exercise.cpp
 * Author: Dimitar
 *
 * Created on April 26, 2015, 12:33 PM
 */

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
class Sorter {
public:
    virtual void sortArray(T A[], int n) = 0;
};

template<typename T>
class InsertionSorter : public Sorter<T> {
public:

    virtual void sortArray(T A[], int n) {
        for (int i = 1; i < n; i++) {
            int j = i;
            while (j > 0 && A[j - 1] > A[j]) {
                swap(A[j], A[j - 1]);
                j = j - 1;
            }
        }
    }
};

/*
 * 
 */
int main(int argc, char** argv) {

    int a[] = {1, 6, 2, 3, 8, 9, 5, 2, 0};
    float d[] = {5.4, 6.7, 0.3, 1.6, 7.8, 1.5};

    Sorter<int> * s = new InsertionSorter<int>();
    s->sortArray(a, 9);

    InsertionSorter<int> ss;

    Sorter<float> * sFloat = new InsertionSorter<float>();
    sFloat->sortArray(d, 6);

    for (auto i : a) {
        cout << i << " ";
    }

    return 0;
}


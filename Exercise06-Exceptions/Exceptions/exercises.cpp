/* 
 * File:   exercisesMain.cpp
 * Author: Dimitar
 *
 * Created on May 16, 2015, 12:56 PM
 */

#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

/**
 * note, if b == 0 and you cast the result to double, the answer is inf
 */
double nonSafeDivistion(int a, int b) {
    return a / b;
}

double safeDivision(int a, int b) {
    if (b == 0)
        throw invalid_argument("Division by zero!");
    return (double) a / b;
}

class Calculator {
public:

    double startCaltulating() {
        return division(5, 0);
    }

private:

    double division(int a, int b) {
        if (b == 0)
            throw invalid_argument("Division by zero!");
        return (double) a / b;
    }
};

/*
 * 
 */
int main(int argc, char** argv) {

    //    cout << nonSafeDivistion(5, 0) << endl;

    try {
        cout << safeDivision(7, 2) << endl;
        cout << safeDivision(5, 0) << endl;
    } catch (invalid_argument& ex) {
        cout << ex.what() << endl;
    }


    try {
        Calculator c;
        cout << c.startCaltulating() << endl;
    } catch (invalid_argument& ex) {
        cout << ex.what() << endl;
    }

    return 0;
}


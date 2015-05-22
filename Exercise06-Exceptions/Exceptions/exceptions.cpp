/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on May 16, 2015, 11:20 AM
 */

#include <iostream>
#include <stdexcept>
#include <assert.h>

using namespace std;

/**
 * To catch exceptions, a portion of code is placed under exception inspection.
 * It is called a try-block.
 * 
 * When an exceptional circumstance arises within that block,
 * an exception is thrown that transfers the control to the exception handler.
 * 
 * If no exception is thrown, the code continues normally and all handlers are ignored.
 * 
 * An exception is thrown by using the throw keyword from inside the try block.
 * 
 * Exception handlers are declared with the keyword catch, which must be placed
 * immediately after the try block:
 */
void simpleException() {
    try {
        // A throw expression accepts one parameter.
        throw -1;
    } catch (int ex) {
        cout << "An exception occurred. Exception No. " << ex << endl;
    }
}

/**
 * Multiple handlers (i.e. catch expressions) can be chained.
 * Each one with a different parameter type.
 * Only the handler whose argument type matches the type of the exception specified in the throw statement is executed.
 * 
 * If an ellipsis (...) is used as the parameter of catch,
 * that handler will catch any exception no matter what the type of the exception thrown.
 * 
 * This can be used as a default handler that catches all exceptions not caught by other handlers:
 */
void simpleMultipleHandlers(int x) {
    try {

        if (x % 2 == 0) {
            throw -1;
        } else {
            throw "Some problem occurred!";
        }

    } catch (int ex) {
        cout << "An exception occurred. Exception No. " << ex << endl;
    } catch (const char * msg) {
        cout << "An exception occurred. Exception No. " << msg << endl;
    } catch (...) {
        cout << "Unknown exception occurred" << endl;
    }
}

/**
 * Older code may contain dynamic exception specifications.
 * They are now deprecated in C++, but still supported.
 * 
 * A dynamic exception specification follows the declaration of a function,
 * appending a throw specifier to it:
 */
double myfunction1(char param) throw (int); // Will throw only int.
int myfunction2(int param) throw (); // all exceptions call unexpected. Won't throw nothing.
int myfunction3(int param); // normal exception handling.

/**
 * Standard exceptions:
 * The SLT provides a base class specifically designed to declare objects to be
 * thrown as exceptions.
 * 
 * It is called std::exception and is defined in the <exception> header.
 * 
 * This class has a virtual member function called what() that returns a
 * null-terminated character sequence (of type char *) and that can be
 * overwritten in derived classes to contain some sort of description of the exception.
 */
int getElementAt(int index) {
    int size = 5;
    int a[] = {1, 2, 3, 4, 5};

    if (index < 0 || index > size) {
        throw out_of_range("Index out of range exception! The array doesn't have such element!");
    }
    return a[index];
}

/**
 * User defined exception:
 */
class MyException : public exception {
public:

    virtual const char* what() const throw() {
        return "My exception occurred";
    }


};

/*
 * Exceptions provide a way to react to exceptional circumstances
 * (usually runtime errors)
 */
int main() {

    simpleException();

    cout << endl;

    simpleMultipleHandlers(2);
    simpleMultipleHandlers(1);

    cout << endl;

    try {

        cout << getElementAt(3) << endl;
        cout << getElementAt(50) << endl;

    } catch (out_of_range& ex) {
        cout << ex.what() << endl;
    } catch (exception& ex) {
        cout << "Default: " << ex.what() << endl;
    }
    cout << "after exception" << endl;
    cout << endl;

    try {

        throw MyException();

    } catch (MyException& ex) {
        cout << ex.what() << endl;
    }

    cout << endl;

    // Example of standard exceptions use:
    try {

        int* myArray = new int[10000000000];

    } catch (bad_alloc& ex) {
        cout << "Exception:" << ex.what() << endl;
    }

    return 0;
}


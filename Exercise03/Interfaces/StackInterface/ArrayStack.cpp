/* 
 * File:   ArrayStack.cpp
 * Author: Dimitar
 *
 * Created on April 18, 2015, 5:40 PM
 */

#include <iostream>

using namespace std;

/*
 * Stack Interface:
 * 
 * An interface in C++ is a class, that consists only from pure virtual functions.
 * Pure virtual function - function declared with =0 at the end. It has no implementations.
 * Also known as abstract class.
 * You cannot declare variables from abstract class.
 * 
 */
class Stack {
public:
    virtual void push(int x) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual int getSize() = 0;
};

/*
 * class ArrayStack implements the Stack interface.
 * 
 * That means the ArrayStack class must provide implementations for all the methods
 * from the Stack interface.
 */
class ArrayStack : public Stack {
private:
    const static int MAX_ELEMENTS = 10;
    int elements[MAX_ELEMENTS];
    int size, topElement;

public:

    ArrayStack() {
        size = 0;
        topElement = 0;
    }

    virtual void push(int x) {
        if (size == MAX_ELEMENTS) {
            cout << "no space!" << endl;
        } else {
            elements[++topElement] = x;
            size++;
        }
    }

    virtual int pop() {
        if (size == 0) {
            cout << "stack is empty" << endl;
            return NULL;
        } else {
            size--;
            return elements[topElement--];
        }
    }

    virtual int top() {
        if (size == 0) {
            cout << "stack is empty" << endl;
            return NULL;
        } else {
            return elements[topElement];
        }
    }

    virtual int getSize() {
        return this->size;
    }

};

/*
 * 
 */
int main(int argc, char** argv) {
    
    Stack * s = new ArrayStack();

    for (int i = 0; i < 10; i++) {
        s->push(i);
    }

    s->push(10);

    for (int i = 0; i < 10; i++) {
        cout << s->pop() << endl;
    }

    s->pop();

    return 0;
}


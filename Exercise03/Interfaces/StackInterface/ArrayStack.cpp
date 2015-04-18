/* 
 * File:   ArrayStack.cpp
 * Author: Dimitar
 *
 * Created on April 18, 2015, 5:40 PM
 */

#include <iostream>

using namespace std;

class Stack {
public:
    virtual void push(int x) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual int getSize() = 0;
};

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
            elements[size] = x;
            topElement = size;
            size++;
        }
    }

    virtual int pop() {
        if (size == 0) {
            cout << "stack is empty!" << endl;
            return NULL;
        } else {
            size--;
            return elements[topElement--];
        }
    }

    virtual int top() {
        if (size != 0)
            return elements[topElement];
        else {
            cout << "stack is empty" << endl;
            return NULL;
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

    ArrayStack s;

    for (int i = 0; i < 10; i++) {
        s.push(i);
    }

    s.push(10);

    for (int i = 0; i < 10; i++) {
        cout << s.pop() << endl;
    }

    s.pop();

    return 0;
}


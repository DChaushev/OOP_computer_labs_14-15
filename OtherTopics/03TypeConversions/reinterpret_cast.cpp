/*
    reinterpret_cast

    Converts any pointer type to any other pointer type,
    even of UNRELATED classes. The operation result is a
    simple binary copy of the value from one pointer to the other.
    All pointer conversions are allowed: neither the content pointed,
    nor the pointer type itself is checked.

    It can also cast pointers to or from integer types.
    The format in which this integer value represents a
    pointer is PLATFORM-SPECIFIC.

    The only guarantee is that a pointer cast to an integer type
    large enough to fully contain it (such as intptr_t),
    is guaranteed to be able to be cast back to a valid pointer.

    The conversions that can be performed by reinterpret_cast but
    not by static_cast are low-level operations based on reinterpreting
    the binary representations of the types, which on most cases results
    in code which is system-specific, and thus non-portable.
*/

#include <iostream>
using namespace std;

class A {/* ... */};

class B
{
public:
    void go(){};
};
/*
int main()
{
    A * a = new A; // same as new A() - by default calls the default constructor :D
    B * b = reinterpret_cast<B*>(a);

    //b->go();
    // This code compiles, although it does not make much sense, since now b points
    // to an object of a totally unrelated and likely incompatible class. Dereferencing b is unsafe.
}
*/

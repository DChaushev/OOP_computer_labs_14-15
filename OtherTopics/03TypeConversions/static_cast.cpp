/*
    static_cast

    Can perform conversions between pointers to related classes,
    not only upcasts (pointer-to-derived -> pointer-to-base), but
    also downcasts (pointer-to-base -> pointer-to-derived).

    NO CHECKS are performed during runtime to guarantee that the
    object being converted is in fact a full object of the destination type.
    It is up to the programmer to ensure that the conversion is safe.
    On the other side, it does not incur the overhead of the type-safety checks of dynamic_cast.

    static_cast is able to perform with pointers to classes not only
    the conversions allowed implicitly, but also their opposite conversions.

    static_cast is also able to perform ALL conversions allowed implicitly
    (not only those with pointers to classes), and is also able to perform
    the opposite of these.

    It can:

    Convert from void* to any pointer type.
        In this case, it guarantees that if the void* value was obtained by
        converting from that same pointer type, the resulting pointer value is the same.

    Convert integers, floating-point values and enum types to enum types.

    Additionally, static_cast can also perform the following:

    -Explicitly call a single-argument constructor or a conversion operator.
    -Convert to rvalue references. // You don't know these, yet
    -Convert enum class values into integers or floating-point values.
    -Convert any type to void, evaluating and discarding the value.

*/

#include <iostream>
using namespace std;

class Base {};
class Derived: public Base {};
/*
int main()
{
    Base * a = new Base();
    Derived * b = static_cast<Derived*>(a);

    // This is valid code, although b points to an incomplete object
    // of the class and could lead to runtime errors if dereferenced.
}
*/

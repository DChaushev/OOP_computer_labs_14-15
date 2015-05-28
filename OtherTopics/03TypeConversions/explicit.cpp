/*
    II. Type casting (explicit conversions)

    C++ is a strong-typed language. Many conversions, specially those
    that imply a different interpretation of the value, require
    an explicit conversion, known in C++ as type-casting.

    There exist two main syntaxes for generic type-casting:
        functional and c-like:

    double x = 10.3;
    int y;
    y = int (x);    // functional notation
    y = (int) x;    // c-like cast notation

    These generic type-castings are enough for most conversions
        with fundamental data types.
    However, these operators can be applied indiscriminately on
        classes and pointers to classes, which can lead to code that
        -while being syntactically correct- can cause runtime errors.
        For example, see below.

    Unrestricted explicit type-casting allows to convert any pointer
        into any other pointer type, independently of the types they point to.
    The subsequent call to member result will produce either a run-time error
        or some other unexpected results.

    In order to control these types of conversions between classes,
        we have four specific casting operators:
        - dynamic_cast
        - reinterpret_cast
        - static_cast
        - const_cast.

    Their format is to follow the new type enclosed between angle-brackets (<>)
        and immediately after, the expression to be converted between parentheses.

    dynamic_cast <new_type> (expression)
    reinterpret_cast <new_type> (expression)
    static_cast <new_type> (expression)
    const_cast <new_type> (expression)

    The traditional type-casting equivalents to these expressions would be:

    (new_type) expression
    new_type (expression)

    Each one of these have its own special characteristics.
        See more in the different files.
*/

#include <iostream>
using namespace std;

class Dummy
{
    double i, j;
};

class Addition
{
    int x, y;
public:
    Addition(int a, int b) : x(a), y(b) {};
    int result()
    {
        return x + y;
    }
};
/*
int main()
{

    double x = 10.345;
    int a, b;
    a = int (x);    // functional notation
    b = (int) x;    // c-like cast notation

    cout<<"x: "<<x<<"; int (x): "<<a<<"; (int) x: "<<b<<endl;

    Dummy d;
    Addition * ptr_add;

    //A pointer to Addition is assigned a reference to an object
    //of another unrelated type using explicit type-casting
    ptr_add = (Addition*) &d;

    // not 0 if you comment the part with int and double ?
    cout << ptr_add->result();

    return 0;
}
*/

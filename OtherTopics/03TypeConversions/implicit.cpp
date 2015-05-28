/*
    //http://www.cplusplus.com/doc/tutorial/typecasting/
        bonus typeid
        lexical_cast
    implicit, implicit_class, explicit, dynamic_cast, static_cast, reinterpret_cast, const_cast

    I. Implicit conversions
    Implicit conversions - automatically when copying to a compatible type

    Standart conversions are without any explicit operator.
    They affect fundamental data types (short to int, int to float,
        double to int...), to or from bool, and some pointer conversions.

    Converting FROM some SMALLER type TO a BIGGER one
        for integers and float->double is known as promotion.
    Guaranteed to produce the exact SAME VALUE.

    Other conversions may not be able to represent the same value exactly:

    Negative integer value converted to an unsigned type (>= source)
        converts to 2's complement bitwise representation
        (i.e., -1 becomes the largest value representable by the type,
          -2 the second largest, ...).
    Conversions from/to bool consider:
        false = 0 (for numeric types)
            and false = null pointer (for pointer types)
        true is equivalent to all other values
            and is converted to the equivalent of 1.
    Conversion from a floating-point type to an integer type
        = truncated value (decimal part removed).
        If the result is outside the range of representable values,
        the conversion causes undefined behavior!

    BIGGER -> SMALLER conversion between numeric types of the same kind
        (integer-to-integer or floating-to-floating) is valid,
        but the value is implementation-specific (and may not be portable).

    Some conversions imply loss of precision, the compiler can issue a warning.
        This warning can be avoided with an explicit conversion.

    Arrays and functions implicitly convert to pointers.

    Pointers in general allow the following conversions:

    Null pointers -> pointers of any type
    Pointers to any type -> void pointers
    Pointer upcast:
        pointers to a derived class -> pointer to accessible and unambiguous base class
            without modifying its const or volatile qualification.
*/

#include <iostream>
#include <limits>

using namespace std;

class Base{};
class Derived : public Base{};
/*
int main()
{
    short short_var = 2000;
    int int_shrt;
    // PROMOTED from short to int
    int_shrt = short_var;
    cout<<"int_shrt: "<<int_shrt<<endl;

    int neg1 = -1, neg2 = -2;
    unsigned int pos1 = neg1, pos2 = neg2;
    cout<<endl<<"pos1: "<<pos1<<"; pos2: "<<pos2<<
        "; unsigend_int_max: "<<std::numeric_limits<unsigned int>::max()<<endl;


    bool true_b = true, false_b = false;
    int int_true = true_b;
    //int * false_ptr = false_b;
    int * false_ptr = false;
    int * int_ptr = nullptr;
    bool null_b = int_ptr;


    double dbl = 3.14;
    int int_dbl = dbl;
    cout<<endl<<"int_dbl: "<<int_dbl<<endl;


    double precise = 0.123456789;
    // Implementation specific
    float not_precise = precise;
    cout<<endl<<"not_precise: "<<not_precise<<endl;


    int arr[]{42, 1, 2};
    int * ptr_arr = arr;
    cout<<endl<<"*ptr_arr: "<<*ptr_arr<<endl;

    void * void_ptr = ptr_arr;

    //double * dbl_ptr = int_ptr;


    Derived * der_ptr = new Derived();
    Derived * const der_const_ptr = new Derived();

    Base * base_der = der_ptr;

    Base * base_const_der = der_const_ptr;
    Base * const const_base_const_der = der_const_ptr;

    Base * const const_base_der = der_ptr;

    //Derived * new_der = base_der;

    return 0;
}
*/

/*
    dynamic_cast

    Can only be used with pointers and references to classes (or with void*).
    Its purpose is to ensure that the result of the type conversion points
        to a valid complete object of the destination pointer type.

    This includes pointer upcast (pointer-to-derived -> pointer-to-base),
    in the same way as allowed as an implicit conversion.

    But dynamic_cast can also downcast (pointer-to-base -> pointer-to-derived)
    polymorphic classes (those with virtual members) if -and only if-
    the pointed object is a valid complete object of the target type.

    !!! Compatibility note !!!:
    This type of dynamic_cast requires Run-Time Type Information (RTTI)
    to keep track of dynamic types. Some compilers support this feature as
    an option which is disabled by default. This needs to be enabled for
    runtime type checking using dynamic_cast to work properly with these types.

    When dynamic_cast cannot cast a pointer because it is not a complete object
    of the required class -as in the second conversion in the example- it returns
    a null pointer to indicate the failure.

    If dynamic_cast is used to convert to a reference type and the conversion
    is not possible, an exception of type bad_cast is thrown instead.

    dynamic_cast can also perform the other implicit casts allowed on pointers:
    casting null pointers between pointers types (even between unrelated classes),
    and casting any pointer of any type to a void* pointer.

*/

#include <iostream>
#include <exception>
using namespace std;

class Base
{
    virtual void dummy() {}
};

class Derived: public Base
{
    int a;
};
/*
int main ()
{
    try
    {
        Base * ptr_base1 = new Derived;
        Base * ptr_base2 = new Base;
        Derived * ptr_der;

        ptr_der = dynamic_cast<Derived*>(ptr_base1);
        if (ptr_der == 0)
        {
            cout << "Null pointer on first type-cast."<<endl;
        }

        // Null pointer on this type-cast.
        ptr_der = dynamic_cast<Derived*>(ptr_base2);
        if (ptr_der == 0)
        {
            cout << "Null pointer on second type-cast."<<endl;
        }

        Base & base_ref = *ptr_base2; // Base object
        // P.s. References should be initialised always
        Derived & der_ref = dynamic_cast<Derived&>(base_ref);

    }
    catch (exception& e)
    {
        cout << "Exception: " << e.what();
    }

    return 0;
}
*/

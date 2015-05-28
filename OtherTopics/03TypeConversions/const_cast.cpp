/*
    const_cast

    This type of casting manipulates the constness of the object
    pointed by a pointer, either to be set or to be removed.
    For example, in order to pass a const pointer to a function
    that expects a non-const argument
*/

#include <iostream>
using namespace std;

void print(char * str)
{
    cout<<str<<'\n';
}

/*
    The example is guaranteed to work because function print
    does not write to the pointed object. Note though, that
    removing the constness of a pointed object to actually
    write to it causes undefined behavior.

    It is always wiser to declare function parameters and
    methods const where aplicable (or const versions of them).

    'mutable' is the reverse hack - const methods that want to
    still change something (but not observable outside of class)
*/

/*
int main ()
{
    const char * c = "sample text";
    print (const_cast<char*>(c));

    return 0;
}
*/

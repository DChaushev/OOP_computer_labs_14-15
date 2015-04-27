#include <iostream>
 // just for typeid(), type_index() and etc;
#include <typeinfo>
#include <typeindex>


class MyClassWithNeedleslyLongNameThatIsNotVeryFriendly{};

//A type alias is a different name by which a type can be identified.
//It is NOT a different type, just an alias to the same one - they have the same type_id

// The old way (C, C++03), it is still more common today
// 'existing_type' can be any type - fundamental, compound, user-defined, etc.
//typedef existing_type new_type_name;

typedef char C;
typedef unsigned int WORD;
typedef char * pChar;
typedef char field [50];
typedef MyClassWithNeedleslyLongNameThatIsNotVeryFriendly SpecialClass;




// The C++11 way, can be used with templates too:
//using new_type_name = existing_type;

using C = char;
using WORD = unsigned int;
using pChar = char *;
using field = char [50];
using SpecialClass = MyClassWithNeedleslyLongNameThatIsNotVeryFriendly;

/*
    'typedef' and 'using' create aliases that are semantically equivalent
    'typedef' cannot (easily) be used with templates

    Used where we have long and complex types or where we want to abstract the types.

    For example, by using an alias of int to refer to a particular kind of parameter
    instead of using int directly, it allows for the type to be easily replaced by long
    (or some other type) in a later version, without having to change every instance where it is used.
*/

template <typename T> class TemplateClassLongName{};

//using with templates
template <typename T> using MyType = TemplateClassLongName<T>;

int main(int argc, char** argv)
{
    TemplateClassLongName<int> templOrig;
    MyType<int> templAlias;

    const std::type_info& tiOrig = typeid(templOrig);
    const std::type_info& tiAlias = typeid(templAlias);

    std::cout << "Are types and there aliases equal: " <<
        (std::type_index(tiOrig) == std::type_index(tiAlias)) << std::endl;

    SpecialClass obj;
    pChar p = "Gosho";
    field f = "Pesho";
    WORD w = 123456789;

    std::cout << "pChar p: '" << p << "'; field f: '" << f << "'; WORD w: '" << w << "'" << std::endl;
}

#include <iostream>

/*
    Enums are new types defined by the programmer
    All possible values are explicitly stated (constants at compile time)

    Values of enums are implicitly convertible to int, and vice versa.
    The elements of enums are always assigned an int numerical equivalent internally,
    of which they become an alias. If it is not specified otherwise, the integer value
    equivalent to the first possible value is 0, the equivalent to the second is 1, and so on...

    You can specify explicitly other int values.
    Elements without explicitly specified int values take +1 the value of the previous element.

    You cannot distinguish between the enum vals and thier int aliases - this is bad - comes from C.
*/

/*
    C++11 has real enum classes/structs, first see the normal enums down in the main()
    No implicit conversion to int and back.
    Mandatory scoping of the values with their type (::)
    The underlying type can be specified - char, short, int - you can control how big is the enum type
    These are called 'scoped enumerations'
*/


    // char defines that the underlying storage type is char
        // It is optional - you can write just: enum class/struct <name> {};
    // NO explisit casting between this type and the enum class/struct
        // BUT there again is 0-based numbering, and you can set a different number for every value
    enum class Month : short {
        JAN, FEB, MAR, APR = 44, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
    };


int main(int argc, char** argv)
{
    enum colors {red, green, blue, white, black, yellow, purple, orange, brown, grey};
    colors r = red;
    colors g = green;
    // Only colors x = 5; wasn't likes by my compiler - try it with yours
    colors x = (colors)5;
    std::cout << std::boolalpha << "Is x == 5: " << (x == 5) << std::endl;

    // A better way to specify enums values - always prefer it!
    colors better = colors::white;

    std::cout << "Which color is x: " << x << "; Maybe this will work: " << (colors)x << std::endl;

    // enums are constants - usually the values are written UPPER_CASE
    enum Colors {RED = 5, GREEN = 8, BLUE};
    Colors col_red = Colors::RED;
    Colors col_green = Colors::GREEN;
    Colors col_blue = Colors::BLUE;
    std::cout << "Is col1 == RED: " << (col_red == Colors::RED) << "; green (=8): " <<
        col_green << "; blue (no expl. int specified): " << col_blue << std::endl;


    /*
    // C++11
    Month m1 = Month::MAY;
    // No implicit conversion
    //short s = m1;
    short sVal = static_cast<short>(m1);
    std::cout << "m1 short value (with EXPLICIT cast): " << sVal << std::endl;

    std::cout << "sizeof(Month): " << sizeof(Month) << std::endl;
    std::cout << "sizeof(m1): " << sizeof(m1) << std::endl;
    */
}


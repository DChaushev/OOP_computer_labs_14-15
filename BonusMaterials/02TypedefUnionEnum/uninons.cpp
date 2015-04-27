#include <iostream>

/*
    Unions:
    Similar to structures as syntax but DIFFERENT functionality
    By default everything is public
    All members share THE SAME MEMORY - you cannot change one of them without the others
    As big as their biggest memeber

    Usages:
    If we want to use only one of the members at a time according to some type
        or other condition - see tagged unions
    If we want to present one and the same memory in a different way - see down
        (Standart says it's undefined behavior to read from the member of the union
        that wasn't most recently written but if two union members are standard-layout types,
        it's well-defined to examine their common subsequence on any compiler.)
*/

union mix_t {
  unsigned int uint;
  struct {
    unsigned short high;
    unsigned short low;
    } shorts;
  unsigned char bytes[4];
};

/*
    If we assume 'int' is 4 bytes and 'short' is 2 bytes (depends on the system),
    the union defined above allows the access to the same group of 4 bytes differently:
    mix.uint, mix.shorts and mix.bytes - as if they were a single value of type int,
    or as if they were two values of type short, or as an array of char elements, respectively.

    The exact alignment and order of the members of a union in memory depends on the system,
    with the possibility of creating portability issues(!)
*/

/*
    When declared within classes the unions can be anonymous - without name.
    That way their members are accessed directly as members of the class:
    <object-of-class>.<member-of-anonymous-union-inside-the-class>
*/

class ClassWithAnonymousUnionMember
{
public:
    int member_of_class;
    // The size of the union is the max of the sizes of its members - likely sizeof(int) in this case
    union
    {
        int member_of_anon_union;
        short another_member_of_anon_union;
    };
    union
    {
        int member_of_NONanon_union;
    } NON_anon_union;
};

int main(int argc, char** argv)
{
    mix_t mix;
    mix.uint = 67305985; // 00000100 00000011 00000010 00000001
    // Little endian system - low = 1027 (00000100 00000011); high = 513 (00000010 00000001)
    std::cout << "shorts.low: " << mix.shorts.low << "; shorts.high: " << mix.shorts.high << std::endl;
    std::cout << "Bytes cast to int: [0]: " << (int)mix.bytes[0] << "; [1]: " << (int)mix.bytes[1] <<
        "; [2]: " << (int)mix.bytes[2] << "; [3]: " << (int)mix.bytes[3] << std::endl;


    ClassWithAnonymousUnionMember obj;
    obj.member_of_class = 5;

    // The following two share the same memory!
    obj.member_of_anon_union = 5;
    std::cout << obj.another_member_of_anon_union;

    // The members of the normal (non-anonymous) union are used by its name
    obj.NON_anon_union.member_of_NONanon_union = 5;
}

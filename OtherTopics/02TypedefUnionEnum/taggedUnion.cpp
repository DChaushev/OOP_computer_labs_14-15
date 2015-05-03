#include <iostream>
// S has one non-static data member (tag), three enumerator members,
// and three variant members (c, n, d)
struct S
{
    enum {CHAR, INT, DOUBLE} tag;
    union {
        char c;
        int n;
        double d;
    };
};

void print_s(const S& s)
{
    switch(s.tag)
    {
        case S::CHAR:
            std::cout << s.c << std::endl;
            break;
        case S::INT:
            std::cout << s.n << std::endl;
            break;
        case S::DOUBLE:
            std::cout << s.d << std::endl;
            break;
    }
}

int main()
{
    S s = {S::CHAR, 'a'};
    print_s(s);

    s.tag = S::INT;
    s.n = 123;

    print_s(s);
}

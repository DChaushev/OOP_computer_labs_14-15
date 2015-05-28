/*
    First, let's mention the 4 initialization forms:
        Circle has a CONSTRUCTOR (ONLY!) taking 1 argument of type double

    Circle foo (10.0);   // functional form
    Circle bar = 20.0;   // assignment init.
    Circle baz {30.0};   // uniform init.
    Circle qux = {40.0}; // POD-like

    An advantage of uniform initialization over functional form
    is that, unlike parentheses, braces cannot be confused with
    function declarations, and thus can be used to explicitly call default constructors:

        Rectangle rectb;   // default constructor called
        Rectangle rectc(); // function declaration (default constructor NOT called)
        Rectangle rectd{}; // default constructor called


    Now, about type conversions:

    In classes, implicit conv. are controlled with 3 member functions:

    - Single-argument constructors:
        implicit conv. from particular type to initialize object.

    - Assignment operator:
        implicit conv. from particular type on assignments.

    - Type-cast operator:
        implicit conv. to particular type.

    Type-cast operator syntax:
        'operator' keyword, destination type and an empty set of parentheses.
        The return type = destination type - NOT specified.


    On a function call, C++ allows one implicit conversion to happen for each argument.
    This may be somewhat problematic for classes, because it is not always what is intended.
    For example, if we have the following function:

        void fn (B arg) {}

    This function takes an argument of type B.
    But if class B can be constructed from class A,
    fn() could be called as well with an object of type A:

        A foo;
        fn (foo);

    This may or may not be what was intended.
    But, in any case, it can be prevented by marking
    the affected constructor with the 'explicit' keyword! (C++11)

    Additionally, constructors marked with explicit cannot
    be called with the assignment-like syntax
    In the above example, bar could not have been constructed with:

        B bar = foo; // equivalent to B bar = B(foo);

    Type-cast member functions can also be specified as explicit.
    This prevents implicit conversions in the same way as explicit-specified
    constructors do for the destination type.
*/

// implicit conversion of classes:
#include <iostream>
using namespace std;

class A {};
class C {};

class B
{
public:
  // conversion from A (constructor):
  //explicit
  B (const A& x) {}
  // conversion from A (assignment):
  B& operator= (const A& x) {return *this;}
  // conversion to A (type-cast operator)
  operator A() {return A();}
  //explicit operator C() {return C();};
};

void fn (B arg) {}
/*
int main ()
{
  A foo;

  // calls CONSTRUCTOR
  B bar = foo; // equivalent to B bar = B(foo);

  // calls assignment
  bar = foo;

  A a;
  // calls type-cast operator
  // B bar is cast to A then assigned to A a
  a = bar;

  fn(a);

  //C c1 = bar;

  C c2 = (C)bar;

  return 0;
}
*/

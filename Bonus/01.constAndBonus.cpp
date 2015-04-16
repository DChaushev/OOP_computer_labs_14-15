
// Preprocessor directives:
#include <iostream>

//#define token [value]
//#undef token

#define MAX(a, b) ((a) > (b) ? (a) : (b))

//#ifdef, #ifndef, #if, #endif, #else and #elif
/*
#ifndef __cplusplus
#error A C++ compiler is required!
#endif
*/

using namespace std;

int addition (int a, int b)
{ return a+b; }

int subtraction (int a, int b)
{ return a-b; }

int operation (int x, int y, int (*functocall)(int,int))
{
  int res;
  res = (*functocall)(x,y);
  return res;
}

int main()
{
    /*
      Pointers - you should already know about them:
      http://www.cplusplus.com/doc/tutorial/pointers/

      - Address-of operator (&)
      - Dereference operator (*)
      - Pointers and arrays
      - Pointer arithmetics
      - Pointers and string literals
      - Pointers to pointers
      - void pointers - generization - dereferencing only after cast
      - nullptr
      - Pointers to functions:
        A regular function declaration, except that the
        name of the function is enclosed between parentheses ()
        and an asterisk (*) is inserted before the name
    */

     int (*ptr_to_func)(int, int) = subtraction;
     int pluz = operation (50, 8, addition);
     int mainas = operation (50, 8, ptr_to_func);
     cout<<pluz<<' '<<mainas<<endl;
     cout<<"MAX(3, 4) = "<<MAX(3, 4);

     /*
       Also check out some info about dynamic memory (new, delete)
       if you have problems with it:
       http://www.cplusplus.com/doc/tutorial/dynamic/
    */


    // CONST
    // 1. When ‘const’ really denotes constant value of some kind

    // Should be initialized immediately, better than ‘#define’
    const int THE_ANSWER = 42;

    // Variable pointer to a constant integer
    const int * ptrToConst;
    // Exactly the same as the previous
    int const * ptrToConst2;

    int length = 5;
    // Different - constant pointer to a variable integer
    int * const PTR = &length;

    // Constant pointer to a constant integer
    int const * const constPtrToConstInt = &THE_ANSWER;

    /*
      Basically ‘const’ applies to whatever is on its immediate left
      (other than if there is nothing there in which case it applies to
      whatever is its immediate right).
    */
}

// Use of ‘const’ in function return values
const char *return_the_answer()
{
    return "Some text";
}
/*
  P.s. Use proper strings (std::string) wherever possible!!!
  char* (char[]) is only resource management trouble + no predefined operators
*/



// 2. ‘const’ when passing parameters

// ‘in:’, ‘out:’ and ‘inout:’ parameters

// Pass by value (copy) - the default way
void increment1(int parameter)
{
    parameter = parameter + 1;
}

// Pass by reference
void increment2(int &parameter)
{
    parameter = parameter + 1;
}

// The C way - pass pointer
// Should be changed everywhere in the program
void increment3(int *parameter)
{
    *parameter = *parameter + 1;
}

// When we don't need to change parameters but we don't want to slowly copy them too
struct BigData {
    unsigned long long data[1024];
};

void some_function(BigData const &data);
/*
    Messy - essentially making an in-only variable passing method
    from an in-out variable passing method
    which was itself made from an in-only variable passing method
    and all this just to trick the compiler into doing some optimization.
*/


// 3. Aaand now 'const' specifically in the OOP world

class ConstExampleOOP
{
private:
    int changes_public_behaviour;

    // Conceptual Constness
    //mutable
    int can_not_change_public_behaviour;

    void const_method() const
    {
        //changes_public_behaviour += 5;
        //can_not_change_public_behaviour += 5;
    }
};

/*
  An object which has been made ‘const’, for example by being passed as
  a parameter in the ‘const &’ way, can only have those of its methods that
  are explicitly declared ‘const’ called.

  const_cast
*/

class TooMuchConst
{
    const int*const method(const int*const& param) const;


    /*
      The 5 uses ‘const’ respectively mean:
      - the variable pointed to by the returned pointer won’t be alterable
      - the returned pointer itself won’t be alterable
      - the method does not alter:
        + the variable pointed to by the given pointer
        + the given pointer itself
        + the object of which it is a method
    */
};

// C++ allows you to overload based on the const-ness of a method.
// You can have both const and non-const methods, and the correct version will be called.


/*
    SOME USEFUL LINKS:

    Preprocessor directives:
        http://www.cplusplus.com/doc/tutorial/preprocessor/
        https://msdn.microsoft.com/en-us/library/3sxhs2ty.aspx

    pointers:
        http://www.cplusplus.com/doc/tutorial/pointers/

    function pointers:
        http://www.cprogramming.com/tutorial/function-pointers.html
        http://www.learncpp.com/cpp-tutorial/78-function-pointers/

    dynamic memory:
        http://www.cplusplus.com/doc/tutorial/dynamic/

    const:
        http://duramecho.com/ComputerInformation/WhyHowCppConst.html
        http://www.cprogramming.com/tutorial/const_correctness.html

    char[] vs std::string
        http://stackoverflow.com/questions/1764079/why-do-you-prefer-char-instead-of-string-in-c
        http://stackoverflow.com/questions/1287306/difference-between-string-and-char-types-in-c

    RVO - the only compiler optimization allowed by the C++ standart
    that can brake your program (change it's observable behaviour)
        http://en.wikipedia.org/wiki/Return_value_optimization
*/

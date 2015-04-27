#include <iostream>

using namespace std;

template<typename T, T mul_div_const>
class TemplateCalculator
{
public:

    T multiply(T multiply_me)
    {
        return multiply_me * mul_div_const;
    }

    T divide(T divide_me)
    {
        return divide_me / mul_div_const;
    }
};

class NonTemplateCalculator
{
public:
    static const int MULT_DIV_CONST = 2;
    int multiply(int multiply_me)
    {
        return multiply_me * MULT_DIV_CONST;
    }

    int divide(int divide_me)
    {
        return divide_me / MULT_DIV_CONST;
    }
};


template <int N> struct Factorial
{
    enum { val = Factorial<N-1>::val * N };
};

template<>
struct Factorial<0>
{
    enum { val = 1 };
};

// Explicitly instantiate the template class with the parameters
// This instantiates ALL METHODS!
//template class TemplateCalculator<int, 0>;

int main(int argc, char** argv)
{

    TemplateCalculator<int, 2> calc_templ_2;
    cout << "template: 6 * 2 = " << calc_templ_2.multiply(6) << endl;
    cout << "template: 6 / 2 = " << calc_templ_2.divide(6) << endl;

    TemplateCalculator<int, 0> calc_templ_0;
    cout << "template: 6 * 0 = " << calc_templ_0.multiply(6) << endl;
    /*
    Only now the error is caught because the didivde method with division by 0
    is instantiated before being called. My compiler only warns me about it but
    compiles it anyway - runtime crashes.
    */
    //cout << "template: 6 / 0 = " <<calc_templ_0.divide(6) << endl;

    NonTemplateCalculator norm_calc;
    cout << "normal: 6 * " << NonTemplateCalculator::MULT_DIV_CONST << " = " << norm_calc.multiply(6) << endl;
    /*
    Even with the bottom method call commented if the NonTemplateCalculator class has its constant
    MULT_DIV_CONST set to 0 the compiler will produce error. Comapre that with the template class
    where the error is caught only IF the faulty method is instantiated. This way a code may be faulty
    but the bug in it spotted only very later in teh development or worse - if we provide library to
    other programmers - when they try to use this method instantiated with class div_mul_const = 0.
    This is why when we test we instantiat explicitly all the combinations of the classes that will be used -
    see above the top of main for syntax.
    */
    //cout << "normal: 6 * " << NonTemplateCalculator::MULT_DIV_CONST << " = " << norm_calc.divide(6) << endl;

    // Note this value is generated at compile time.
    // Also note that most compilers have a limit on the depth of the recursion available.
    std::cout << Factorial<4>::val << "\n";

    return 0;
}

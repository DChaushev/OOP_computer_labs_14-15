#include <iostream>

template <int N> struct Factorial {

    enum {
        val = Factorial < N - 1 > ::val * N
    };
};

template<>
struct Factorial<0> {

    enum {
        val = 1
    };
};

//int main(int argc, char** argv) {
//    /*
//        Templates are Turing-complete (google ths term up) - if you do calculations that use only
//        values that can be computeted at compile time you can write your whole
//        program using only templates! It will compile slower because the whole
//        calculation will take place during compilation and then you will have
//        the answer without any runtime (or very small to just output it) :)
//     */
//
//    // Note this value is generated at COMPILE time.
//    // Also note that most compilers have a limit on the depth of the recursion available.
//    std::cout << Factorial<4>::val << "\n";
//
//    return 0;
//}

// This function is declared as static, and can now be used only within this file
// Attempts to access it from another file via a function forward declaration will fail
// #include <iostream>
// #include "abc.h"

// // inline namespace V2 // declare an inline namespace named V2
// // {
// //     void doSomething()
// //     {
// //         std::cout << "V2\n";
// //     }

// // }

template <typename T>
T addOne(T x) // function template definition
{
    return x + 1;
}

template <>
int addOne<int>(int x)
{
    return x + 1;
}

// #include <iostream>
// #include <bitset>

// int main()
// {
//     // output the number in hexadecimal
//     std::cout << std::hex << -5 << '\n';
//     // output the number in binary
//     std::cout << std::bitset<32>(-5) << '\n';
//     int u = static_cast<int>(static_cast<unsigned int>(-5)); // convert -5 to unsigned and back
//     std::cout << u << '\n';                                  // print -5
//     return 0;
// }
// int main()
// {
//     constexpr int n1{5}; // note: constexpr
//     unsigned int u1{n1}; // okay: conversion is not narrowing due to exclusion clause

//     constexpr int n2{-5}; // note: constexpr
//     unsigned int u2{n2};  // compile error: conversion is narrowing due to value change

//     return 0;
// }

// int main()
// {
//     using std::cout;          // this using declaration tells the compiler that cout should resolve to std::cout
//     cout << "Hello world!\n"; // so no std:: prefix is needed here!

//     return 0;
// } // the using declaration expires at the end of the current scope

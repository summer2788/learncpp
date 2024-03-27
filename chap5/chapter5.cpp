// #include <algorithm> // for std::max
// #include <cmath>     // for std::abs
// #include <iostream>

// // Our own constexpr implementation of std::abs (for use prior to C++20)
// // In C++23, use std::abs instead
// // constAbs() can be called like a normal funtion, but can handle different types of values (e.g. int ,
// // double, ect...)
// template <typename T>
// constexpr T constAbs(T x)
// {
//     return x < 0 ? -x : x;
// }

// constexpr bool approximatelyEqualRel(double a, double b, double relEpsilon)
// {
//     return (constAbs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
// }

// /* Return true if the difference between a and b is less than or equal to absEpsilon, or
// within relEpsilon percent of the larger of a and b */

// constexpr bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
// {
//     // check iif the numbers are really close -- needed when comparing numbers near zero.
//     if (std::abs(a - b) <= absEpsilon)
//         return true;

//     // Otherwise fall back to knuth's algorithm
//     return approximatelyEqualRel(a, b, relEpsilon);
// }

// int main()
// {
//     // a is really close to 1.0, but has rounding errors
//     constexpr double a{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
//     constexpr double relEps{1e-8};
//     constexpr double absEps{1e-12};

//     std::cout << approximatelyEqualRel(a, 1.0, relEps) << '\n';       // compare "almost 1.0" to 1.0
//     std::cout << approximatelyEqualRel(a - 1.0, 0.0, relEps) << '\n'; // compare "almost 0.0" to 0.0

//     std::cout << approximatelyEqualAbsRel(a, 1.0, absEps, relEps) << '\n';       // compare "almost 1.0" to 1.0
//     std::cout << approximatelyEqualAbsRel(a - 1.0, 0.0, absEps, relEps) << '\n'; // compare "almost 1.0" to 1.0

//     return 0.0;
// }

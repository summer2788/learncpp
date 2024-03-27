#include <iostream>

// enum Color
// {
//     black,
//     red,
//     blue,
// };

// // Teach operator<< how to print a Color
// // Consider this magic for now since we haven't explained any of the concepts it uses yet
// // std::ostream is the type of std::cout
// // The return type and parameter type are references (to prevent copies from being made)!
// std::ostream &operator<<(std::ostream &out, Color color)
// {
//     switch (color)
//     {
//     case black:
//         return out << "black";
//     case red:
//         return out << "red";
//     case blue:
//         return out << "blue";
//     default:
//         return out << "???";
//     }
// }

// int main()
// {
//     Color shirt{blue};
//     std::cout << "Your shirt is " << shirt << '\n'; // it works!

//     return 0;
// }

// enum Pet : int // we've specified a base
// {
//     cat,   // assigned 0
//     dog,   // assigned 1
//     pig,   // assigned 2
//     whale, // assigned 3
// };

// int main()
// {
//     Pet pet1{2}; // ok: can brace initialize with integer
//     // Pet pet2(2);  // compile error: cannot direct initialize with integer
//     // Pet pet3 = 2; // compile error: cannot copy initialize with integer

//     // pet1 = 3; // compile error: cannot assign with integer

//     return 0;
// }

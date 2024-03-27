#include <iostream>
#include <typeinfo>
#include <cstddef> // for NULL
#include <string>

// Function-like macro that evaluates to true if the type (or object) is equal to or smaller than
// the size of two memory addresses
// #define isSmall(T) (sizeof(T) <= 2 * sizeof(void *))

// struct S
// {
//     double a;
//     double b;
//     double c;
// };

// int main()
// {
//     std::cout << std::boolalpha;          // print true or false rather than 1 or 0
//     std::cout << isSmall(int) << '\n';    // true
//     std::cout << isSmall(double) << '\n'; // true
//     std::cout << isSmall(S) << '\n';      // false

//     return 0;
// }

// int main()
// {
//     int x{5};     // normal variable
//     int &ref{x};  // a reference to an integer (bound to x)
//     int *ptr{&x}; // a pointer to an integer

//     std::cout << x;
//     std::cout << ref;
//     std::cout << *ptr << '\n';

//     ref = 6; // use a reference to change the value of x
//     std::cout << x;
//     std::cout << ref;          // use the reference to print x's value (6)
//     std::cout << *ptr << '\n'; // use the pointer to print x's value (6)

//     *ptr = 7; // use the pointer to change the value of x
//     std::cout << x;
//     std::cout << ref;
//     std::cout << *ptr << '\n';

//     return 0;
// }

// int main() // assume a 32-bit application
// {
//     char *chPtr{};        // chars are 1 byte
//     int *iPtr{};          // ints are usually 4 bytes
//     long double *ldPtr{}; // long doubles are usually 8 or 12 bytes

//     std::cout << sizeof(chPtr) << '\n'; // prints 4
//     std::cout << sizeof(iPtr) << '\n';  // prints 4
//     std::cout << sizeof(ldPtr) << '\n'; // prints 4

//     return 0;
// }

// int main()
// {
//     int *ptr{};                // create a null pointer
//     std::cout << *ptr << '\n'; // Dereference the null pointer

//     return 0;
// }

// void print(int x) // this function accepts an integer
// {
//     std::cout << "print(int): " << x << '\n';
// }

// void print(int *ptr) // this function accepts an integer pointer
// {
//     std::cout << "print(int*): " << (ptr ? "non-null\n" : "null\n");
// }

// int main()
// {
//     int x{5};
//     int *ptr{&x};

//     print(ptr); // always calls print(int*) because ptr has type int* (good)
//     print(0);   // always calls print(int) because 0 is an integer literal (hopefully this is what we expected)

//     print(NULL); // this statement could do any of the following:
//     // call print(int) (Visual Studio does this)
//     // call print(int*)
//     // result in an ambiguous function call compilation error (gcc and Clang do this)

//     print(nullptr); // always calls print(int*)

//     return 0;
// }

// const int& getNextId()
// {
//     static int s_x{ 0 }; // note: variable is non-const
//     ++s_x; // generate the next id
//     return s_x; // and return a reference to it
// }

// int main()
// {
//     // const int& id1 { getNextId() }; // id1 is a reference
//     // const int& id2 { getNextId() }; // id2 is a reference

//     static int s_x{0};
//     static int s_x{0};
//     std::cout << s_x << '\n';

//     return 0;
// }

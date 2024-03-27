// #include <iostream>
// #include <utility>

// // struct Employee
// // {
// //     int id{};
// //     int age{};
// //     double wage{};
// // };

// // void printEmployee(const Employee &employee) // note pass by reference here
// // {
// //     std::cout << "ID:   " << employee.id << '\n';
// //     std::cout << "Age:  " << employee.age << '\n';
// //     std::cout << "Wage: " << employee.wage << '\n';
// // }

// // int main()
// // {
// //     Employee joe{14, 32, 24.15};
// //     Employee frank{15, 28, 18.27};

// //     // Print Joe's information
// //     printEmployee(joe);

// //     std::cout << '\n';

// //     // Print Frank's information
// //     printEmployee(frank);

// //     return 0;
// // }

// // struct Foo
// // {
// //     short a{};
// //     int b{};
// //     double c{};
// // };

// // int main()
// // {
// //     std::cout << "The size of short is " << sizeof(short) << " bytes\n";
// //     std::cout << "The size of int is " << sizeof(int) << " bytes\n";
// //     std::cout << "The size of double is " << sizeof(double) << " bytes\n";

// //     std::cout << "The size of Foo is " << sizeof(Foo) << " bytes\n";

// //     return 0;
// // }

// template <typename T, typename U>
// struct Pair
// {
//     T first{};
//     U second{};
// };

// // Here's a deduction guide for our Pair (needed in C++17 only)
// // Pair objects initialized with arguments of type T and U should deduce to Pair<T, U>
// template <typename T, typename U>
// Pair(T, U) -> Pair<T, U>;

// int main()
// {
//     // Pair<int> p1{5, 6};
//     // std::cout << p1.first << ' ' << p1.second << '\n';

//     // Pair<double> p2{1.2, 3.4};
//     // std::cout << p2.first << ' ' << p2.second << '\n';

//     // Pair<double> p3{7.8, 9.0};
//     // std::cout << p3.first << ' ' << p3.second << '\n';

//     Pair<int, int> p1{1, 2}; // ok: we're explicitly specifying the template arguments
//     Pair p2{1, 2};           // compile error in C++17 (okay in C++20)

//     std::cout << p1.first << ' ' << p1.second << '\n';
//     std::cout << p2.first << ' ' << p2.second << '\n';

//     return 0;
// }

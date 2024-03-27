// #include <iostream>

// void print()
// {
//     std::cout << "There\n";
// }

// namespace Foo // define a namespace named Foo
// {
//     // This doSomething() belongs to to namespace  Foo
//     int doSomething(int x, int y)
//     {
//         return x + y;
//     }

//     void print() // this print() lives in the Foo namespace
//     {
//         std::cout << "Hello";
//     }

// }

// namespace Goo // define a namespace named Goo
// {
//     // This doSomething() belongs to to namespace  Goo
//     int doSomething(int x, int y)
//     {
//         return x - y;
//     }

// }

// int doSomething(int x, int y); // forward declaration for doSomething()

// int main()
// {
//     std::cout << Foo::doSomething(4, 3) << '\n'; // which doSomething() will get ?
//     Foo::print();                                // call print() in Foo namespace
//     ::print();                                   // call print() in global namespace (same as calling print() in this case)
//     return 0;
// }

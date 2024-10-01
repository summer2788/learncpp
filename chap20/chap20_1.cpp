// #include <iostream>
// #include <functional>

// using ArithmeticFunction = std::function<int(int, int)>;
// int getInteger()
// {
//     std::cout << "Enter an Integet\n";
//     int a;
//     std::cin >> a;
//     return a;
// }

// char getOperator()
// {
//     char op{};

//     do
//     {
//         std::cout << "Enter an operation *,/,+,- : \n";
//         std::cin >> op;

//     } while (
//         op != '*' && op != '/' && op != '+' && op != '-');

//     return op;
// }

// int add(int a, int b)
// {
//     return a + b;
// }

// int subtract(int a, int b)
// {
//     return a - b;
// }

// int multiply(int a, int b)
// {
//     return a * b;
// }

// int divide(int a, int b)
// {
//     return a / b;
// }

// ArithmeticFunction getArithmeticFunction(char a)
// {
//     switch (a)
//     {
//     case '+':
//         return add;
//     case '-':
//         return subtract;
//     case '*':
//         return multiply;
//     case '/':
//         return divide;
//     }
//     return nullptr;
// }

// int main()
// {
//     int a{getInteger()};
//     int b{getInteger()};
//     char c{getOperator()};
//     std::cout << getArithmeticFunction(c)(a, b);
// }

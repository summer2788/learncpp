// #include <iostream>

// int factorial(int num)
// {
//     if (num <= 0)
//         return 1;

//     return num * factorial(num - 1);
// }

// int SumOfDigit(int num)
// {
//     if (num < 10)
//         return num;

//     return SumOfDigit(num / 10) + num % 10;
// }

// void DecimalToBinary(unsigned int num)
// {
//     if (num <= 1)
//     {
//         std::cout << num;
//         return;
//     }
//     DecimalToBinary(num / 2);
//     std::cout << num % 2;
// }

// int main()
// {
//     std::cout << factorial(7) << "\n";
//     std::cout << SumOfDigit(93427);

//     std::cout << "type the positive integer" << '\n';
//     int var{};
//     std::cin >> var;
//     DecimalToBinary(static_cast<unsigned int>(var));
// }

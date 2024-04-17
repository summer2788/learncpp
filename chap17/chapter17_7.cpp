// #include <iostream>

// namespace ProgramData
// {
//     constexpr int squares[]{0, 1, 4, 9};
// }

// bool matchSquare(int input)
// {
//     for (auto e : ProgramData::squares)
//     {
//         if (input == e)
//             return true;
//     }

//     return false;
// }

// int main()
// {
//     while (true)
//     {
//         std::cout << "Enter a single digit integer, or -1 to quit: ";
//         int input{};
//         std::cin >> input;

//         if (input == -1)
//             break;

//         if (matchSquare(input))
//             std::cout << input << " is a perfect square\n";
//         else
//             std::cout << input << " is not a perfect square\n";
//     }

//     std::cout << "Bye\n";

//     return 0;
// }

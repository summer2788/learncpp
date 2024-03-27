// #include <iostream>
// #include <cassert>
// #include <string_view> // for std::string_view
// #include <vector>

// void fizzbuzz(int num)
// {

//     using namespace std::literals::string_view_literals;
//     const std::vector divisors{3, 5, 7, 11, 13, 17, 19};
//     const std::vector words{"fizz"sv, "buzz"sv, "pop"sv, "bang"sv, "jazz"sv, "pow"sv, "boom"sv};

//     assert(std::size(divisors) == std::size(words) && "fizzbuzz: array sizes don't match");

//     for (int i{1}; i <= num; ++i)
//     {
//         bool printed{false};
//         for (std::size_t j{0}; j < std::size(divisors); ++j)
//         {
//             if (i % divisors[j] == 0)
//             {
//                 std::cout << words[j];
//                 printed = true;
//             }
//         }

//         if (!printed)
//         {
//             std::cout << i;
//         }
//         std::cout << '\n';
//     }
// }

// int main()
// {
//     fizzbuzz(150);
//     return 0;
// }

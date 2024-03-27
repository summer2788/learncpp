// #include <iostream>
// #include <vector>
// #include <string>
// #include <string_view>

// template <typename T>
// bool isValueInArray(const std::vector<T> &arr, const T &value)
// {
//     for (const auto &element : arr)
//     {
//         if (element == value)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     using namespace std::literals::string_view_literals;
//     std::vector names{"Alex"sv, "Betty"sv, "Caroline"sv, "Dave"sv, "Emily"sv, "Fred"sv, "Greg"sv, "Holly"sv};

//     std::cout << "Enter a name: ";
//     std::string sv{""};
//     std::getline(std::cin >> std::ws, sv);

//     // By explicitly specifying std::string_view as a function template argument,
//     // the compiler will implicitly convert username to `std::string_view` to match the parameter type.
//     bool found{isValueInArray<std::string_view>(names, sv)};

//     // The following is also okay.  If we rely on template argument deduction instead, the compiler
//     // won't do implicit conversions, so we need to make sure `username` has the expected type.
//     // bool found{ isValueInArray(names, static_cast<std::string_view>(username)) };

//         std::cout << found << '\n';
// }

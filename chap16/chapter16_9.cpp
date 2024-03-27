// #include <vector>
// #include <iostream>
// #include <type_traits>

// namespace Students
// {
//     enum Names
//     {
//         kenny,       // 0
//         kyle,        // 1
//         stan,        // 2
//         butters,     // 3
//         cartman,     // 4
//         max_students // 5
//     };
// }

// int main()
// {
//     std::vector testScores{78, 94, 66, 77, 14};
//     Students::Names name{Students::stan}; // non-constexpr

//     testScores[name] = 76; // may trigger a sign conversion warning if Student::Names defaults to a signed underlying type

//     // check the Names type
//     std::cout << "The underlying type of Students::Names is "
//               << typeid(std::underlying_type<Students::Names>::type).name()
//               << '\n';

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <array>
// #include <algorithm>

// struct Student
// {
//     std::string name;
//     int points;
// };

// int main()
// {
//     std::array<Student, 8> arr{
//         {{"Albert", 3},
//          {"Ben", 5},
//          {"Christine", 2},
//          {"Dan", 8}, // Dan has the most points (8).
//          {"Enchilada", 4},
//          {"Francis", 1},
//          {"Greg", 3},
//          {"Hagrid", 5}}};

//     auto maxElemnt{
//         std::max_element(arr.begin(), arr.end(), [](Student a, Student b)
//                          { return a.points < b.points; })};

//     std::cout << (*maxElemnt).name << " is a good student" << '\n';
// }

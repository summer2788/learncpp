#include <array>
#include <iostream>

enum StudentNames
{
    kenny,       // 0
    kyle,        // 1
    stan,        // 2
    butters,     // 3
    cartman,     // 4
    max_students // 5
};

int main()
{
    constexpr std::array testScores{78, 94, 66, 77};

    // // Ensure the number of test scores is the same as the number of students
    // static_assert(std::size(testScores) == max_students); // compile error: static_assert condition failed

    std::cout << "Cartman got a score of " << testScores[butters] << '\n';

    return 0;
}

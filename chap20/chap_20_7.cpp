// #include <iostream>
// #include <vector>
// #include "Random.h"
// #include <cmath>

// std::vector<int> nums;

// int main()
// {
//     using std::cout, std::cin;
//     int start, num;
//     int multiplier[2] = {2, 4};

//     int mt = multiplier[Random::get(0, 1)];

//     cout << "Start where?" << '\n';
//     cin >> start;

//     cout << "How many ?" << '\n';
//     cin >> num;

//     for (int i = 0; i < num; i++)
//     {
//         nums.push_back(start * start * mt);
//         start++;
//     }

//     cout << "I generated " << num << " square numbers. Do you know what each number is after multiplying it by " << mt << '\n';
//     int guess;

//     while (true)
//     {
//         cin >> guess;
//         auto found{std::find(nums.begin(), nums.end(), guess)};
//         if (found != nums.end())
//         {
//             cout << "Nice ! " << nums.size() << " numser(s) left" << '\n';
//             nums.erase(found);

//             if (nums.empty())
//             {
//                 cout << "Nice! You found all numbers, good job!" << '\n';
//                 break;
//             }
//         }
//         else
//         {
//             auto closet = std::min_element(nums.begin(), nums.end(),
//                                            [guess](const int &a, const int &b)
//                                            {
//                                                return std::abs(guess - a) < std::abs(guess - b);
//                                            });

//             cout << guess << " is wrong! Try " << *closet << " next time" << '\n';
//             break;
//         }
//     }
// }

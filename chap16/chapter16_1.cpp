// #include <iostream>

// template <typename T>
// T findMax(std::vector<T> &arr)
// {

//     std::size_t length{arr.size()};
//     if (length == 0)
//     {
//         return T{};
//     }
//     T max{arr[0]};
//     for (std::size_t index{1}; index < length; ++index)
//     {
//         if (arr[index] >= max)
//         {
//             max = arr[index];
//         }
//     }

//     return max;
// }

// int main()
// {
//     std::vector data1{84, 92, 76, 81, 56};
//     std::cout << findMax(data1) << '\n';

//     std::vector data2{-13.0, -26.7, -105.5, -14.8};
//     std::cout << findMax(data2) << '\n';

//     std::vector<int> data3{};
//     std::cout << findMax(data3) << '\n';

//     return 0;
// }

#include <iostream>
#include <iterator> //for std::size()
#include <utility>  // for std::swap()

int main()
{
    // Selection sort
    // int array[]{30, 50, 20, 10, 40};
    // constexpr int length{static_cast<int>(std::size(array))};

    // for (int startIndex{0}; startIndex < length - 1; ++startIndex)
    // {
    //     int smallestIndex{startIndex};

    //     for (int currentIndex{startIndex + 1}; currentIndex < length; ++currentIndex)
    //     {
    //         if (array[smallestIndex] > array[currentIndex])
    //         {
    //             smallestIndex = currentIndex;
    //         }
    //     }

    //     std::swap(array[startIndex], array[smallestIndex]);
    // }

    // for (int index{0}; index < length; ++index)
    // {
    //     std::cout << array[index] << ' ';
    // }

    // Bubble sort
    // int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
    // constexpr int length{static_cast<int>(std::size(array))};

    // for (int iteration{0}; iteration < length - 1; ++iteration)
    // {

    //     int endOfArrayIndex{length - iteration};
    //     bool swapped{false};

    //     for (int currentIndex{0}; currentIndex < endOfArrayIndex - 1; currentIndex++)
    //     {
    //         if (array[currentIndex] > array[currentIndex + 1])
    //         {
    //             std::swap(array[currentIndex], array[currentIndex + 1]);
    //             swapped = true;
    //         }
    //     }

    //     if (!swapped)
    //     {
    //         break;
    //     }
    // }

    // for (int index{0}; index < length; ++index)
    // {
    //     std::cout << array[index] << ' ';
    // }

    // Insertion sort
    // int array[]{30, 50, 20, 10, 40};
    // constexpr int length{static_cast<int>(std::size(array))};

    // for (int startIndex{1}; startIndex < length; ++startIndex)
    // {
    //     int key = array[startIndex]; // The value being inserted
    //     int currentIndex{startIndex - 1};

    //     while (currentIndex >= 0 && array[currentIndex] > key)
    //     {
    //         // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
    //         array[currentIndex + 1] = array[currentIndex];
    //         --currentIndex;
    //     }
    //     array[currentIndex + 1] = key;
    // }

    // for (int index{0}; index < length; ++index)
    // {
    //     std::cout << array[index] << ' ';
    // }
}

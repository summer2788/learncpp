#include <algorithm> // std::sort
#include <cstddef>
#include <iostream>
#include <string>

std::size_t getNameCount()
{
    std::cout << "How many names would you like to enter? ";
    std::size_t length{};
    std::cin >> length;

    return length;
}

// Asks user to enter all the names
void getNames(std::string *names, std::size_t length)
{
    for (std::size_t i{0}; i < length; ++i)
    {
        std::cout << "Enter name #" << i + 1 << ": ";
        std::getline(std::cin >> std::ws, names[i]);
    }
}

// Prints the sorted names
void printNames(std::string *names, std::size_t length)
{
    std::cout << "\nHere is your sorted list:\n";

    for (std::size_t i{0}; i < length; ++i)
        std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';
}

int main()
{
    std::size_t length{getNameCount()};

    // Allocate an array to hold the names
    auto *names{new std::string[length]{}};

    getNames(names, length);

    // Sort the array
    std::sort(names, names + length);

    printNames(names, length);

    // don't forget to use array delete
    delete[] names;
    // we don't need to set names to nullptr/0 here because it's going to go out
    // of scope immediately after this anyway.

    return 0;
}

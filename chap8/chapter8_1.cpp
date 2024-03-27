// #include <iostream>

// int main()
// {
//     for (int i{0}; i < 10; ++i) // uses <, still terminates
//     {
//         std::cout << i;
//         if (i == 9)
//             ++i; // jump over value 10
//     }

//     for (int i{0}; i != 10; ++i) // uses !=, infinite loop
//     {
//         std::cout << i;
//         if (i == 9)
//             ++i; // jump over value 10
//     }

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     for (char c{'a'}; c <= 'e'; ++c) // outer loop on letters
//     {
//         std::cout << c; // print our letter first

//         for (int i{0}; i < 3; ++i) // inner loop on all numbers
//             std::cout << i;

//         std::cout << '\n';
//     }

//     return 0;
// }

// #include <cstdlib> // for std::exit()
// #include <iostream>

// void cleanup()
// {
//     // code here to do any kind of cleanup required
//     std::cout << "cleanup!\n";
// }

// int main()
// {
//     std::cout << 1 << '\n';
//     cleanup();

//     std::exit(0); // terminate and return status code 0 to operating system

//     // The following statements never execute
//     std::cout << 2 << '\n';

//     return 0;
// }

// #include <iostream>

// // For illustrative purposes only, don't use this
// unsigned int LCG16() // our PRNG
// {
//     static unsigned int s_state{5323};

//     // Generate the next number

//     // We modify the state using large constants and intentional overflow to make it hard
//     // for someone to casually determine what the next number in the sequence will be.

//     s_state = 8253729 * s_state + 2396403; // first we modify the state
//     return s_state % 32768;                // then we use the new state to generate the next number in the sequence
// }

// int main()
// {
//     // Print 100 random numbers
//     for (int count{1}; count <= 100; ++count)
//     {
//         std::cout << LCG16() << '\t';

//         // If we've printed 10 numbers, start a new row
//         if (count % 10 == 0)
//             std::cout << '\n';
//     }

//     return 0;
// }

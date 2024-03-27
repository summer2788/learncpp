// #include <iostream>

// int main()
// {
//     switch (2)
//     {
//         int a; // okay: definition is allowed before the case labels

//     case 1:
//         int y; // okay but bad practice: definition is allowed within a case
//         y = 4; // okay: assignment is allowed
//         std::cout << y << '\n';
//         break;

//     case 2:
//         y = 5; // okay: y was declared above, so we can use it here too
//         std::cout << y << '\n';
//         break;

//     case 3:
//         break;
//     }
//     return 0;
// }

// #include <iostream>
// #include <random> //for std::mt19937 and std::uniform_int_distribution
// int main()
// {
//     std::random_device rd{};
//     std::seed_seq ss{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()}; // get 8 integers of random numbers
//     std::mt19937 mt{ss};

//     // create a reusable random number generator that generates uniform numbers between 1 and 6
//     std::uniform_int_distribution die6{1, 6};

//     // print a bunch of random numbers
//     for (int count{1}; count <= 40; ++count)
//     {
//         std::cout << die6(mt) << '\t'; // generate a roll of the die here

//         // if we've printed 10 numbers, start a new row
//         if (count % 10 == 0)
//             std::cout << '\n';
//     }

//     return 0;
// }

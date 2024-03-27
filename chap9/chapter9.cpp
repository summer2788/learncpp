// #include <iostream>
// #include <limits>

// void ignoreLine()
// {
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// }

// double getDouble()
// {
//     while (true) // Loop until user enters a valid input
//     {
//         std::cout << "Enter a decimal number: ";
//         double x{};
//         std::cin >> x;

//         // Check for failed extraction
//         if (!std::cin) // if the previous extraction failed
//         {
//             if (std::cin.eof()) // if the stream was closed
//             {
//                 exit(0); // shut down the program now
//             }

//             // let's handle the failure
//             std::cin.clear(); // put us back in 'normal' operation mode
//             ignoreLine();     // and remove the bad input

//             std::cout << "Oops, that input is invalid.  Please try again.\n";
//         }
//         else
//         {
//             ignoreLine(); // remove any extraneous input
//             return x;
//         }
//     }
// }

// char getOperator()
// {
//     while (true) // Loop until user enters a valid input
//     {
//         std::cout << "Enter one of the following: +, -, *, or /: ";
//         char operation{};
//         std::cin >> operation;

//         if (!std::cin) // if the previous extraction failed
//         {
//             if (std::cin.eof()) // if the stream was closed
//             {
//                 exit(0); // shut down the program now
//             }

//             // let's handle the failure
//             std::cin.clear(); // put us back in 'normal' operation mode
//         }

//         ignoreLine(); // remove any extraneous input

//         // Check whether the user entered meaningful input
//         switch (operation)
//         {
//         case '+':
//         case '-':
//         case '*':
//         case '/':
//             return operation; // return it to the caller
//         default:              // otherwise tell the user what went wrong
//             std::cout << "Oops, that input is invalid.  Please try again.\n";
//         }
//     } // and try again
// }

// void printResult(double x, char operation, double y)
// {
//     switch (operation)
//     {
//     case '+':
//         std::cout << x << " + " << y << " is " << x + y << '\n';
//         break;
//     case '-':
//         std::cout << x << " - " << y << " is " << x - y << '\n';
//         break;
//     case '*':
//         std::cout << x << " * " << y << " is " << x * y << '\n';
//         break;
//     case '/':
//         std::cout << x << " / " << y << " is " << x / y << '\n';
//         break;
//     default: // Being robust means handling unexpected parameters as well, even though getOperator() guarantees operation is valid in this particular program
//         std::cout << "Something went wrong: printResult() got an invalid operator.\n";
//     }
// }

// int main()
// {
//     double x{getDouble()};
//     char operation{getOperator()};
//     double y{getDouble()};

//     printResult(x, operation, y);

//     return 0;
// }

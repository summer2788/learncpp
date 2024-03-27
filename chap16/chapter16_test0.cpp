// #include <cassert>
// #include <iostream>
// #include <vector>

// namespace Items
// {
//     enum Type
//     {
//         health_potion,
//         torch,
//         arrow,
//         max_items

//     };

// }

// std::string_view getItemNamePlural(Items::Type type)
// {
//     switch (type)
//     {
//     case Items::health_potion:
//         return "health potions";
//     case Items::torch:
//         return "torches";
//     case Items::arrow:
//         return "arrows";
//     default:
//         return "???";
//     }
// }

// std::string_view getItemNameSingular(Items::Type type)
// {
//     switch (type)
//     {
//     case Items::health_potion:
//         return "health potion";
//     case Items::torch:
//         return "torch";
//     case Items::arrow:
//         return "arrow";

//     default:
//         return "???";
//     }
// }

// void printInventoryItem(const std::vector<int> &inventory, Items::Type type)
// {
//     bool plural{inventory[type] != 1};
//     std::cout << "You have " << inventory[type] << ' ';
//     std::cout << (plural ? getItemNamePlural(type) : getItemNameSingular(type)) << '\n';
// }

// // Inventory items should have integral quantities, so we don't need a function template here
// int CountTotalItems(const std::vector<int> &inventory)
// {
//     int sum{0};
//     for (auto item : inventory)
//     {
//         sum += item;
//     }
//     return sum;
// }

// int main()
// {
//     std::vector inventory{1, 5, 10};
//     assert(std::size(inventory) == Items::max_items); // make sure inventory has the correct number of initializers

//     // Since we can't iterate over an enumerated type using a ranged-for , we'll neee to use a traditional for-loop here
//     for (int i{0}; i < Items::max_items; ++i)
//     {
//         auto item{static_cast<Items::Type>(i)};
//         printInventoryItem(inventory, item);
//     }
//     std::cout << "You have " << CountTotalItems(inventory) << " total items\n";

//     return 0;
// }

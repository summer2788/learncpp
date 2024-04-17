#include <iostream>
#include <array>
#include <string_view>
#include <Random.h>

namespace Portion
{
    enum Type
    {
        healing,
        mana,
        speed,
        invisibility,
        max_portion
    };

    constexpr std::array types{healing, mana, speed, invisibility};

    // We will explicitly define the element type so we don't have to use the sv suffix
    constexpr std::array<std::string_view, max_portion> portionName{"healing", "mana", "speed", "invisibility"};

    constexpr std::array cost{20, 30, 12, 50};

    static_assert(std::size(types) == max_portion);
    static_assert(std::size(cost) == max_portion);
    static_assert(std::size(portionName) == max_portion);
}

class Player
{
private:
    int gold;
    std::string_view name{};
    std::vector<Portion::Type> inventory{};

public:
    Player(std::string_view plname)
        : gold{Random::get(80, 120)}, name{plname}
    {
    }
};

void shop()
{
    std::cout << "Here is our selection todaay : \n";
    for (auto i : Portion::types)
    {
        std::cout << "Type : " << Portion::portionName[i] << " Cost " << Portion::cost[i] << '\n';
    }
}

int main()
{
    std::cout << "Welcome to Roscoe's potion emporium!\n";
    std::cout << "Enter your name: \n";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    Player player{name};
    shop();
    return 0;
}

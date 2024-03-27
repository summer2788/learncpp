// #include <iostream>

// enum class MonsterType
// {
//     orge,
//     dragon,
//     orc,
//     giant_spider,
//     slime,
// };

// struct Monster
// {
//     MonsterType type;
//     std::string_view name;
//     int health;
// };

// std::ostream &operator<<(std::ostream &out, MonsterType type)
// {
//     switch (type)
//     {
//     case MonsterType::orge:
//         return out << "orge";
//     case MonsterType::dragon:
//         return out << "dragon";
//     case MonsterType::orc:
//         return out << "orc";
//     case MonsterType::giant_spider:
//         return out << "giant spider";
//     case MonsterType::slime:
//         return out << "slime";
//     default:
//         return out << "???";
//     }
// }

// void printMonster(Monster &monster)
// {

//     std::cout << "This " << monster.type << " is named " << monster.name << " and has " << monster.health << '\n';
// }

// int main()
// {
//     Monster orge{MonsterType::orge, "Torg", 145};
//     Monster slime{MonsterType::slime, "Blurp", 23};

//     printMonster(orge);
//     printMonster(slime);
// }

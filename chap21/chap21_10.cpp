// #include <cassert>
// #include <iostream>
// #include <string>
// #include <string_view>

// class MyString
// {
// private:
//     std::string m_string{};

// public:
//     MyString(std::string_view string = {})
//         : m_string{string}
//     {
//     }

//     std::string_view operator()(int start, int length)
//     {
//         assert(start >= 0);
//         assert(start + length <= static_cast<int>(m_string.length()) && "MyString::operator(int, int): Substring is out of range");

//         // Create a std::string_view of m_string, so we can use std::string_view::substr() instead of std::string::substr()
//         return std::string_view{m_string}.substr(
//             static_cast<std::string_view::size_type>(start),
//             static_cast<std::string_view::size_type>(length));
//     }

//     friend std::ostream &operator<<(std::ostream &out, const MyString &s)
//     {
//         out << s.m_string;

//         return out;
//     }
// };

// int main()
// {
//     MyString s{"Hello, world!"};
//     std::cout << s(7, 5) << '\n'; // start at index 7 and return 5 characters

//     return 0;
// }

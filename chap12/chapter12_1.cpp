// #include <string_view>

// constexpr std::string_view hello{"Hello"};

// constexpr const std::string_view &getConstRef()
// {
//     return hello;
// }

// int main()
// {
//     auto ref1{getConstRef()};           // std::string_view (top-level const and reference dropped)
//     constexpr auto ref2{getConstRef()}; // constexpr std::string_view (constexpr reapplied, reference dropped)

//     auto &ref3{getConstRef()};           // const std::string_view& (reference reapplied, low-level const not dropped)
//     constexpr auto &ref4{getConstRef()}; // constexpr const std::string_view& (reference reapplied, low-level const not dropped, constexpr applied)

//     return 0;
// }

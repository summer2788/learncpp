// #include <iostream>
// #include <cassert>
// #include <utility>
// #include <algorithm>
// #include <cstddef>

// class IntArray
// {
// public:
//     IntArray(std::size_t size) : m_size{size}, m_arr{m_size ? new int[m_size] : nullptr}
//     {
//         assert(length > 0 && "IntArray length should be a positive integer");
//     }

//     ~IntArray()
//     {
//         delete[] m_arr;
//     }

//     IntArray(const IntArray &source);

//     int &operator[](std::size_t index)
//     {
//         return const_cast<int &>(std::as_const(*this)[index]);
//     }

//     const int &operator[](std::size_t index) const
//     {
//         assert(index >= 0);
//         assert(index < m_length);
//         return m_arr[index];
//     }

//     IntArray &operator=(const IntArray &source)
//     {

//         if (this != &source)
//         {

//             delete[] m_arr;
//             m_arr = nullptr;
//             m_size = source.m_size;
//             m_arr = m_size ? new int[m_size] : nullptr;
//             std::copy(source.m_arr, source.m_arr + m_size, m_arr);
//         }

//         return *this;
//     }

//     friend std::ostream &operator<<(std::ostream &out, const IntArray &ar1)
//     {
//         for (std::size_t i = 0; i < ar1.m_size; i++)
//         {
//             out << ar1[i] << ' ';
//         }
//         return out;
//     }

// private:
//     std::size_t m_size{};
//     int *m_arr{nullptr};
// };

// IntArray::IntArray(const IntArray &source) : m_size{source.m_size}, m_arr{m_size ? new int[m_size] : nullptr}
// {
//     std::copy(source.m_arr, source.m_arr + m_size, m_arr);
// }

// IntArray fillArray()
// {
//     IntArray a(5);

//     a[0] = 5;
//     a[1] = 8;
//     a[2] = 2;
//     a[3] = 3;
//     a[4] = 6;

//     return a;
// }

// int main()
// {
//     IntArray a{fillArray()}; // copy constructor called

//     std::cout << a << '\n';

//     auto &ref{a}; // we're using this reference to avoid compiler self-assignment errors
//     a = ref;

//     IntArray b(1);
//     b = a;

//     a[4] = 7;

//     std::cout << b << '\n';

//     return 0;
// }

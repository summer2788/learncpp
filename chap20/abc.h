#include <iostream>

// inline namespace V2 // declare an inline namespace named V2
// {
//     void doSomething();

//     inline int temp = 5;

// }

// struct Foo
// {
//     int z(); // forward declaration of Foo::z()
//     int x(); // forward declaration of Foo::x()
//     int y(); // forward declaration of Foo::y()

//     int m_data{};
// };

// inline int Foo::z() { return m_data; } // m_data already declared above
// inline int Foo::x() { return y(); }    // y already declared above
// inline int Foo::y() { return 5; }
class Accumulator
{
private:
    int m_value{0};

public:
    void add(int value) { m_value += value; }

    // Friend functions defined inside a class are non-member functions
    friend void print(const Accumulator &accumulator)
    {
        // Because print() is a friend of Accumulator
        // it can access the private members of Accumulator
        std::cout << accumulator.m_value;
    }
};

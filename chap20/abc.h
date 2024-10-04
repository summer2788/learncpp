#pragma once
struct Something
{
    static int s_value; // now static
};

int Something::s_value{1}; // initialize s_value to 1

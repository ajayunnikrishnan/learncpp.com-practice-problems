#include <iostream>

void foo()
{
}

int main()
{
    auto x;          // The compiler is unable to deduce the type of x
    auto y{ };       // The compiler is unable to deduce the type of y
    auto z{ foo() }; // z can't have type void, so this is invalid

    return 0;
}

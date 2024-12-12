#include <iostream>

int main()
{
    // temporary object would usually be destroyed after the expression, but is now extended
    // to match the scope of its lvalue reference
    const int& ref { 5 }; // The temporary object holding value 5 has its lifetime extended to match ref

    std::cout << ref << '\n'; // Therefore, we can safely use it here

    return 0;
} // Both ref and the temporary object die here

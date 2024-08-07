#include <iostream>

namespace constants
{
    constexpr int minRideHeightCM { 140 };
}

int main()
{
    std::cout << "Enter your height (in cm): ";
    int x{};
    std::cin >> x;

    if (x >= constants::minRideHeightCM)
        std::cout << "You are tall enough to ride.\n";
    else
    { // multiple statments must be enclosed in a block statement
        std::cout << "You are not tall enough to ride.\n";
        std::cout << "Too bad!\n";
    }

    return 0;
}

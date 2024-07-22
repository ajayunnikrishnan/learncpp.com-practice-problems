#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number: ";
    // using data char, switch to int
    char x{};

    std::cin >> x;
    std::cerr << x << '\n';

    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    // character addition results in adding the ascii character values
  // ie. "0" = 48 => 0+0 = 48 + 48 = 96
    writeAnswer(x + y);

    return 0;
}

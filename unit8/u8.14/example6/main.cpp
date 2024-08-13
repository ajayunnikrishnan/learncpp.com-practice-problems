#include <iostream>
#include <random>

int getCard()
{
    std::mt19937 mt{ std::random_device{}() }; // this gets created and seeded every time the function is called
    std::uniform_int_distribution card{ 1, 52 };
    return card(mt);
}

int main()
{
    std::cout << getCard() << '\n';

    return 0;
}

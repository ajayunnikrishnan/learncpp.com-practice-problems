#include <iostream>

int main()
{
    short bombs { 1 };         // I can has a bomb

    // creates a temporary object of type int that you refers to
    const int& you { bombs };  // You likes to set bombs off
    --bombs;                   // I can disarmed a bomb

    if (you)                   // If you can still has a bomb
    {
        std::cout << "Bombs away!  Goodbye, cruel world.\n";
    }

    return 0;
}

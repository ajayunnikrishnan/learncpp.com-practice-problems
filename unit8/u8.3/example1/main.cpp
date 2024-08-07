// improved version in next directory
#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if (x >= 0) // outer if statement
        // it is bad coding style to nest if statements this way
        if (x <= 20) // inner if statement
            std::cout << x << " is between 0 and 20\n";

    // which if statement does this else belong to?
    // answer: the last unmatched if statment in this case if (x <= 20)
    // this produces wrong output
    else
        std::cout << x << " is negative\n";

    return 0;
}

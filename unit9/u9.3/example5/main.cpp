// program intented to print 1 2 3 4 5
// but prints 1 2 3 4
// off by 1 error
#include <iostream>

int main()
{
    for (int count{ 1 }; count < 5; ++count)
    {
        std::cout << count << ' ';
    }

    std::cout << '\n';

    return 0;
}

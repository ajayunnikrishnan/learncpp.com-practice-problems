// for loop coverage use the 0, 1, 2 test. test spam(0), spam(1), spam(2), no tets beyond 2 is nessecary.
#include <iostream>

void spam(int timesToPrint)
{
    for (int count{ 0 }; count < timesToPrint; ++count)
         std::cout << "Spam! ";
}

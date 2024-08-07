#include <iostream>

int main()
{
  // infinite loop, can only be exited with the following statments: return, break, goto, exception being thrown or user killing the program
  while (true)
  {
    std::cout << "Loop again (y/n)? ";
    char x {};
    std::cin >> x;

    if (x == 'n')
    {
      return 0;
    }
  }

  return 0;
}

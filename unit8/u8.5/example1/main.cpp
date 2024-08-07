// better alternative is a switch statement seen in example2 directory
#include <iostream>

void printDigitName(int x)
{
  // comparing x against a set of values
  if (x == 1)
    std::cout << "One";
  else if (x == 2)
    std::cout << "Two";
  else if (x == 3)
    std::cout << "Three";
  else
    std::cout << "Unknown";
}

int main()
{
  printDigitName(2);
  std::cout << '\n';

  return 0;
}

#include <iostream>

void printNumber(int x)
{
  switch (x)
  {
  case 1:
    std::cout << "One";
    return;
  case 2:
    std::cout << "Two";
    return;
  case 3:
    std::cout << "Three";
    return;
  default:  // if none of the above cases match then default label executes code below
    std::cout << "Unknown";
    return;
  }
}

int main()
{
  printNumber(9);
  std::cout << '\n';

  return 0;
}

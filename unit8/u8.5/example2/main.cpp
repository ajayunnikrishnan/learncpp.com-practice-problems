#include <iostream>

void printName(int x)
{
  switch (x)
  {
  // all case labels must be unique, which they are here
  case 1:
    std::cout << "One";
    return;
  case 2:
    std::cout << "Two";
    return;
  case 3:
    std::cout << "Three";
    return;
  default:
    std::cout << "Unkown";
    return;
  }
}

int main()
{
  printName(1);
  std::cout << '\n';
  printName(5);
  std::cout << '\n';

  return 0;
}

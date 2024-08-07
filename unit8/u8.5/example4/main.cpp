#include <iostream>

void printNumber(int x)
{
  switch (x)
  {
  case 1:
    std::cout << "One" << '\n';
    return;
  case 2:
    std::cout << "Two" << '\n';
    return;
  case 3:
    std::cout << "Three" << '\n';
    return;
  }

  // no default label provided -> code below executes
  std::cout << "Hello" << '\n';
}

int main()
{
  printNumber(4);
  return 0;
}

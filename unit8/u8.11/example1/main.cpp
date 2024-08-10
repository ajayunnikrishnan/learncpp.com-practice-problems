#include <iostream>

void printMath(int x, int y, char z)
{
  switch (z)
  {
  case '+':
    std::cout << x << " + " << y << " is " << x + y << '\n';
    break;
  case '-':
    std::cout << x << " - " << y << " is " << x - y << '\n';
    break;
  case '*':
    std::cout << x << " * " << y << " is " << x * y << '\n';
    break;
  case '/':
    std::cout << x << " / " << y << " is " << x / y << '\n';
    break;
  }
}

int main()
{
  int x { 5 };
  int y { 1 };
  char z { '+' };

  printMath(x, y, z);
  printMath(10, 34, '*');

  return 0;
}

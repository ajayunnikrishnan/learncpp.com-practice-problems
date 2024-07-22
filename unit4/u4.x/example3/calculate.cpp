#include <iostream>

void calculate(double x, double y, char operation)
{
  if (operation == '+')
  {
    std::cout << x << " + " << y << " is " << x + y << '\n';
  }
  else if (operation == '-')
  {
    std::cout << x << " - " << y << " is " << x - y << '\n';
  }
  else if (operation == '*')
  {
    std::cout << x << " * " << y << " is " << x * y << '\n';
  }
  else if (operation == '/')
  {
    std::cout << x << " / " << y << " is " << x / y << '\n';
  }
  else
  {
    return;
  }

}

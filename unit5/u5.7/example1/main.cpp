// example with header file in example2 folder
#include <iostream>

double circumference(double radius);

double pi() { return 3.14159; }

int main()
{
  std::cout << pi() << '\n';
  std::cout << circumference(2.0) << '\n';

  return 0;
}

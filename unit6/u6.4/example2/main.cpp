#include <iostream>

int main()
{
  int x {5};
  int y {x++};  // x is incremented to 6, copy of original x is evaluated to 5, and 5 is assigned to y

  std::cout << x << '\n';
  std::cout << y << '\n';

  return 0;
}

#include <iostream>

int main()
{
  // use explicit type casting to make narrowing conversions:

  // instead of this:
  int x = 2.5;
  std::cout << x << '\n';

  // do this:
  x = static_cast<int>(2.5);
  std::cout << x << '\n';

  return 0;
}

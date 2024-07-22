#include <iostream>

int main()
{
  unsigned int x{ 2 };
  unsigned int y{ 3 };

  // prints 4294967295 due to overflow (cannot represent -1 with unsigned ints)
  std::cout << x - y << '\n';

  return 0;
}

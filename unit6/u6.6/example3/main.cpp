#include <iostream>

int main()
{
  // prints false due to rounding errors (even the smallest difference will make == or != operator give unintended output w/ floats)
  std::cout << std::boolalpha << (0.2 + 0.1 == 0.3) << '\n';

  return 0;
}

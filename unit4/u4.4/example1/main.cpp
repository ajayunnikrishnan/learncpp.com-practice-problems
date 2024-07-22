#include <iostream>

int main()
{
  // assume 4 byte integers
  int x{ 2'147'483'647 };
  std::cout << x << '\n';

  // integer overflow
  x = x + 1;
  std::cout << x << '\n';

  return 0;
}

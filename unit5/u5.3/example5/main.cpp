#include <iostream>

int main()
{
  int x { 12 };

  // change output to hexadecimal
  std::cout << std::hex << x << '\n';
  std::cout << x << '\n';

  // change output to octal
  std::cout << std::oct << x << '\n';
  std::cout << x << '\n';

  // change output to decimal
  std::cout << std::dec << x << '\n';
  std::cout << x << '\n';

  return 0;
}

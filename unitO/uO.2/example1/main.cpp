#include <bitset>
#include <iostream>

int main()
{
  std::bitset<4> x { 0b1100 };

  std::cout << x << '\n';
  // bitwise shift x right by 1, x becomes 1100
  std::cout << (x >> 1) << '\n';
  // bitwise shift x left by 1, x becomes 1000
  std::cout << (x << 1) << '\n';

  return 0;
}

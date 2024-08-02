#include <bitset>
#include <iostream>

int main()
{
  std::bitset<4> x { 0b0101};
  std::bitset<4> y { 0b1100};

  x <<= 1;  // shift x by 1 bit left
  std::cout << x << '\n';

  x >>= 1;  // shift x by 1 bit right
  std::cout << x << '\n';
  x |= y;  // assign x | y to x
  std::cout << x << '\n';

  x &= y;  // assign x & y to x
  std::cout << x << '\n';

  x ^= y;  // assign x ^ y to x
  std::cout << x << '\n';

  x = ~y;  // there is no assignment operator for ~ since it is a unary operator
  std::cout << x << '\n';

  return 0;
}

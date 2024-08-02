#include <iostream>
#include <bitset>

int main()
{
  std::bitset<4> x { 0b0110 };

  std::cout << x << 1 << '\n';  // prints x then 1
  std::cout << (x << 1) << '\n'; // prints x left shifted by 1

  return 0;
}

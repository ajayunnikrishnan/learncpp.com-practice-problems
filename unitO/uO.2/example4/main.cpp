#include <bitset>
#include <iostream>

int main()
{
  std::cout << ~std::bitset<4> {0b0100} << ' ' << ~std::bitset<8> {0b0100} << '\n'; // prints 1011 vs 1111'1011 for same number 100

  return 0;
}

#include <bitset>
#include <iostream>

int main()
{
  // bitwise XOR (exclusive or) operator preforms boolean evaluation on columns
  std::cout << ( std::bitset<4> { 0b0110 } ^ std::bitset<4> { 0b1011 }) << '\n';
  std::cout << ( std::bitset<4> { 0b0110 } ^ std::bitset<4> { 0b1011 } ^ std::bitset<4> { 0b0111}) << '\n';

  return 0;
}

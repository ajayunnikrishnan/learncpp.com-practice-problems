#include <bitset>
#include <iostream>

int main()
{
  // bitwise AND operator preforms boolean evaluation on columns in the same way as OR operator
  std::cout << ( std::bitset<4> { 0b0110 } & std::bitset<4> { 0b1011 }) << '\n';
  std::cout << ( std::bitset<4> { 0b0110 } & std::bitset<4> { 0b1011 } & std::bitset<4> { 0b0111}) << '\n';

  return 0;
}

/*
 * (bitwise OR works by doing boolean OR evaluation on columns)
    0 1 0 1 OR
    0 1 1 0
    -------
    0 1 1 1
*/
#include <bitset>
#include <iostream>

int main()
{
  std::cout << (std::bitset<4> { 0b0101 } | std::bitset<4> { 0b0110 }) << '\n'; // using bitwise OR operator

  return 0;
}

/*
(bitwise OR works by doing boolean OR evaluation on columns)

    0 1 1 1 OR
    0 0 1 1 OR
    0 0 0 1
    --------
    0 1 1 1
*/
#include <bitset>
#include <iostream>

int main()
{
  std::cout << (std::bitset<4> { 0b0111 } | std::bitset<4> { 0b0011 } | std::bitset<4> { 0b0001}) << '\n'; // using bitwise OR operator

  return 0;
}

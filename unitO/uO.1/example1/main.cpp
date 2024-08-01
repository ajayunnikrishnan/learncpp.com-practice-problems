#include <bitset>
#include <iostream>

int main()
{
  std::bitset<8> bits {0b0000'0000}; // 8 bits with bit pattern 0000'0000

  bits.set(3);  // set bit position 3 to 1, (bits are numbered right to left)
  bits.flip(4);  // flip bit no 4 from 0 to 1
  bits.reset(3);  // reset bit position 3 from 1 to 0

  std::cout << bits.test(4) << '\n';  // print val of bit pos 4 to terminal
  std::cout << bits.test(3) << '\n';  // print val of bit pos 3 to terminal

  return 0;
}

// reset a bit w/ bit masks
#include <iostream>
#include <cstdint>

int main()
{
  // create masks
  [[maybe_unused]] std::uint8_t mask0 { 0b0000'0001 };  // represents position 0
  [[maybe_unused]] std::uint8_t mask1 { 0b0000'0010 };  // represents position 1
  [[maybe_unused]] std::uint8_t mask2 { 0b0000'0100 };  // represents position 2
  [[maybe_unused]] std::uint8_t mask3 { 0b0000'1000 };  // represents position 3
  [[maybe_unused]] std::uint8_t mask4 { 0b0001'0000 };  // represents position 4
  [[maybe_unused]] std::uint8_t mask5 { 0b0010'0000 };  // represents position 5
  [[maybe_unused]] std::uint8_t mask6 { 0b0100'0000 };  // represents position 6
  [[maybe_unused]] std::uint8_t mask7 { 0b1000'0000 };  // represents position 7

  std::uint8_t flags { 0b0000'0101 };

  std::cout << "bit 0 is " << (static_cast<bool>(flags & mask0) ? "on\n" : "off\n");  // test flags at pos 0

  flags &= !mask0;  // reset bit at position 0

  std::cout << "bit 0 is " << (static_cast<bool>(flags & mask0) ? "on\n" : "off\n");  // test flags at pos 0

  return 0;
}

#include <cstdint> // for fixed with integers
#include <iostream>

int main()
{
  std::int16_t i{ 5 };
  std::cout << i << '\n';
  std::cout << sizeof(i) << " Bytes" << '\n';

  return 0;
}

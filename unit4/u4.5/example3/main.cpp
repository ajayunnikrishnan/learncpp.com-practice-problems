#include <iostream>

int main()
{
  unsigned int u{ 2 };
  signed int s{ 3 };

  // prints 4294967295 since
  // signed int x gets converted to unsigned int when subtracted by unsigned int u
  std::cout << u - s << '\n';

  return 0;
}

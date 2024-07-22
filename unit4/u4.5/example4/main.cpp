#include <iostream>

int main()
{
  signed int s{ -1 };
  unsigned int u{ 1 };

  // signed s gets converted to usingned int (integer overflow)
  if (s < u)
    std::cout << "-1 is less than 1\n";
  else
    std::cout << "-1 is greater than 1\n";

  return 0;
}

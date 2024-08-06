// better alternative is to access global variables through functions
#include <iostream>

namespace Constants
{
  extern double gravity; // forward declaration
}

int main()
{
  std::cout << Constants::gravity << '\n';
  return 0;
}

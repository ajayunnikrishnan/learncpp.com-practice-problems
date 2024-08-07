#include <iostream>

int main()
{
  switch (2)
  {
  case 1:  // Label does not match
    std::cout << 1 << '\n';  // Skipped
  case 2:  // label match
    std::cout << 2 << '\n';  // Executed
  case 3:
    std::cout << 3 << '\n';  // Executed
  case 4:
    std::cout << 4 << '\n';  // Executed
  default:
    std::cout << 5 << '\n';  // Executed
  }

  return 0;
}

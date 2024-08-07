#include <iostream>

int main()
{
  switch (2)
  {
  case 1:
    std::cout << 1 << '\n';
    break;
  case 2:
    std::cout << 2 << '\n';
    [[fallthrough]];  // modifiying null statement to have fallthough attribute indicating to the compiler that the switch fallthrough is intended
  case 3:
    std::cout << 3 << '\n';  // this is also executed
    break;
  default:
    std::cout << 4 << '\n';
    break;
  }

  return 0;
}

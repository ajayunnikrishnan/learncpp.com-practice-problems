#include <iostream>

int main()
{
  std::cout << true << '\n'; // true evaluates to 1
  std::cout << !true << '\n'; // !true (false) evaluates to 0

  bool b { false };
  std::cout << b << '\n'; // b is false, evaluates to 0
  std::cout << !b << '\n'; // not b (!false), evaluates to 1
  
  return 0;
}

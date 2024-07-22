#include <iostream>

int main()
{
  bool b1 { true };
  bool b2 { false };

  std::cout << b1 << '\n'; // evaluates to 1 (true)
  std::cout << b2 << '\n'; // evaluates to 0 (false)

  bool b3 {}; // defaults to 0 (false)
  std::cout << b3 << '\n';

  return 0;
}

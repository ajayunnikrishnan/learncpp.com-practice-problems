#include <iostream>

int main()
{
  std::cout << true << '\n';
  std::cout << false << '\n';

  std::cout << std::boolalpha; // set print bools as true or false

  std::cout << true << '\n';
  std::cout << false << '\n';

  std::cout << std::noboolalpha; // set print bools as 1 or 0

  std::cout << true << '\n';
  std::cout << false << '\n';

  return 0;
}

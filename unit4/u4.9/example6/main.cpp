#include <iostream>

int main()
{
  bool b {}; // default init to false
  std::cout << "Enter a bool value: ";
  std::cin >> b;
  std::cout << "You entered: " << b << '\n';

  return 0;
}

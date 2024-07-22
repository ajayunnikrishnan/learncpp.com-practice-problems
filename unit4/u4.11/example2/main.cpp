#include <iostream>

int main()
{
  std::cout << "Enter a character: ";
  char x {};
  std::cin >> x;

  char y{};
  std::cin >> y;
  std::cout << "You entered: " << x << " and " << y << '\n';

  return 0;
}

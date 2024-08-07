#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;

  // basic if-else statement
  if (x > 10)
    std::cout << "number is greater than 10" << '\n';
  else
    std::cout << "number is not greater than 10" << '\n';

  return 0;
}

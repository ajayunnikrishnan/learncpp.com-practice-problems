#include <iostream>

int main()
{
  bool b{};
  std::cout << "Enter a bool value: ";

  std::cin >> std::boolalpha; // set input vals as true or false instead of 1 or 0 (case sensitive)
  std::cin >> b;

  std::cout << std::boolalpha; // set output vals as true or false instead of 1 or 0 (case sensitive)
  std::cout << "You entered: " << b << '\n';

  return 0;
}

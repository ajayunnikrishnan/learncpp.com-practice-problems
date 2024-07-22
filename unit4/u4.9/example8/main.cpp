#include <iostream>

bool isEqual(int x, int y)
{
  return x == y;
}

int main()
{
  // get first number
  std::cout << "Enter a number: ";
  int x {};
  std::cin >> x;

  // get second number
  std::cout << "Enter a number: ";
  int y {};
  std::cin >> y;

  // do comparison
  std::cout << std::boolalpha;
  std::cout << "Is " << x << " equal to " << y << "? ";
  std::cout << isEqual(x, y) << '\n';

  return 0;
}

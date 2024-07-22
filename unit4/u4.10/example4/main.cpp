#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x {};
  std::cin >> x;

  std::cout << "Enter a number: ";
  int y {};
  std::cin >> y;

  if (x == y)
    std::cout << x << " and " << y << " are equal\n";
  else
    std::cout << x << " and " << y << " are not equal\n";

  return 0;
}

#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x {};
  std::cin >> x;

  std::cout << "Enter another number: ";
  int y {};
  std::cin >> y;

  int remainder { x % y };
  std::cout << "The remainder of " << x << " / " << y << " is " << remainder << '\n';

  if (remainder == 0)
    std::cout << x << " is divisible by " << y << '\n';
  else
    std::cout << x << " is not divisible by " << y << '\n';

  return 0;
}

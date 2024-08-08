#include <iostream>

int main()
{
  for (int x {}, y {9}; x < 10; ++x, --y)
    std::cout << x << ' ' << y << '\n';

  return 0;
}

#include <iostream>

int abs(int x)
{
  if (x < 0)
    // early return statement
    return -x;

  return x;
}

int main()
{
  std::cout << abs(-4) << '\n';
  std::cout << abs(4) << '\n';

  return 0;
}

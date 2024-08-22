#include <iostream>

int add(int x, int y)
{
  return x + y;
}

int main()
{
  auto sum { add(1,2) };
  std::cout << sum << '\n';

  return 0;
}

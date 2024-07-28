#include <iostream>

consteval int greater(int x, int y)
{
  return x > y ? x : y;
}

int main()
{
  constexpr int x { greater(5, 6) };  // ok, will evaluate at compile time
  std::cout << x << '\n';

  int y { greater(5, 6) };   // ok, will evaluate at compile time
  std::cout << y << '\n';

  std::cout << greater(5, 6) << '\n';   // ok, will evaluate at compile time

  int z { 5 };
  /*std::cout << greater(z, 6) << '\n';   // error, consteval function must evaluate at compile time*/

  return 0;
}

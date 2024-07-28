#include <iostream>

// With a constexpr or consteval function we can uses local variables that are not constexpr, and their vals can be changed 

consteval int doSomething(int x, int y)
{
  x = x + 2;

  int z { x + y };
  if (x > y)
    z = z - 1;

  return z;
}

int main()
{
  std::cout << doSomething( 10, 11) << '\n';

  return 0;
}

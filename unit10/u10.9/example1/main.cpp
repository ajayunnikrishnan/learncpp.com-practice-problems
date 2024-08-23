#include <iostream>

auto add(int x, int y)
{
  return x + y;  // return type is deduced by the type that (x + y) evaluates to (int in this case)
}

int main()
{
  std::cout << add(1,1) << '\n';

  return 0;
}

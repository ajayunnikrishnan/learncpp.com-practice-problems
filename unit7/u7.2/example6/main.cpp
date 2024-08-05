#include <iostream>

namespace Foo::Goo
{
  int add(int x, int y)
  {
    return x + y;
  }
}

namespace Foo
{
  int subtract(int x, int y)
  {
    return x - y;
  }
}

int main()
{
  std::cout << Foo::Goo::add(1, 2) << '\n';  // add is in Foo::Goo
  std::cout << Foo::subtract(1, 2) << '\n';  // subtract is in Foo

  return 0;
}

#include <iostream>

namespace Foo::Goo
{
  int doSomething(int x, int y)
  {
    return x + y;
  }
}

namespace Foo
{
  int doSomething(int x, int y)
  {
    return x - y;
  }
}

int main()
{
  namespace Active = Foo::Goo; // create a temporary namespace alias
  std::cout << Active::doSomething(1, 2) << '\n';  // doSomething is in Foo::Goo

  return 0;
}

#include <iostream>

namespace Foo
{
  int doSomething(int x, int y)
  {
    return x + y;
  }
}

namespace Goo
{
  int doSomething(int x, int y)
  {
    return x - y;
  }
}

int main()
{
  std::cout << Foo::doSomething(3, 4) << '\n';  // calls doSomething in Foo namespace
  std::cout << Goo::doSomething(3, 4) << '\n';  // calls doSomething in Goo namespace

  return 0;
}

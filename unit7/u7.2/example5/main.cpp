#include <iostream>

// defining namespaces inside namespaces (nested namespaces)
namespace Foo
{
  namespace Goo
  {
    int add(int x, int y)  // add defined in Foo::Goo
    {
      return x + y;
    }
  }
}

int main()
{
  std::cout << Foo::Goo::add(1, 1) << '\n';
  return 0;
}

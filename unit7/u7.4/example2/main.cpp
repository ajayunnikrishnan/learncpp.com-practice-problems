#include <iostream>

namespace Foo
{
  int g_x {};  // initialized a global variable in the Foo name space
}

void doSomething()
{
  Foo::g_x = 3;
  std::cout << Foo::g_x << '\n';
}

int main()
{
  doSomething();
  std::cout << Foo::g_x << '\n';

  // global variables can be seen and used anywhere in teh file
  Foo::g_x = 5;
  std::cout << Foo::g_x << '\n';

  return 0;
}
// Foo::g_x goes out of scope here (at the end of file)

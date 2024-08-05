#include <iostream>

void print()
{
  std::cout << " there\n";
}

namespace Foo
{
  void print()
  {
    std::cout << "Hello";
  }
  
  void printHelloThere()
  {
    print();  // if no scope resolution operator is provided, the compiler will search for the identifier in the current namespace (Foo)
    ::print();  // :: with no specified namespace before means "look for the identifer in the global namespace"
  }
}

int main()
{
  Foo::printHelloThere();

  return 0;
}

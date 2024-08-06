#include <iostream>

namespace
{
  void doSomething()
  {
    std::cout << "V1\n";
  }
}

int main()
{
  // identifiers inside an unnamed namespace are treated as if they are in the parent namespace
  doSomething();

  return 0;
}

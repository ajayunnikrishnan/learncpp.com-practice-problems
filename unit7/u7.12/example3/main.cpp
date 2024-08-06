#include <iostream>

namespace a
{
  int x { 5 };
}

namespace b
{
  int x { 10 };
}

int main()
{
  using namespace a;
  using namespace b;

  // naming collision occurs since x is defined in both a and b and is being used without a scope resolution operator
  std::cout << x << '\n'
} // both using-directives expire here

#include <iostream>

constexpr int goo(int c) // goo is now constexpr
{
  return c;
}

constexpr int foo(int b)  // b is not a constant expression within foo
{
  return goo(b); // if foo is resolved at compile-time then goo(b) is also resolved at compile time
}

int main()
{
  std::cout << foo(5) << '\n';

  return 0;
}

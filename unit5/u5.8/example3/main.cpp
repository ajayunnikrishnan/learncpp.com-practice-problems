#include <iostream>

// Best practice from learncpp.com: 
// Always test your constexpr functions in a context that 
// requires a constant expression, as the constexpr function 
// may work when evaluated at runtime but fail when evaluated at compile-time.

int getValue(int x)
{
  return x;
}

constexpr int foo(int x)
{
  return getValue(x); // returning regular int, not constexpr int
}

int main()
{
  int x { foo(5) }; // evaluated at run-time no issues
  /*constexpr int y { foo(5) }; // compile error: can't evaluate a function that calls another non constexpr funciton*/

  return 0;
}

#include <iostream>

int main()
{
  int x { 7 };
  // compilers are even capable of optimizing non-constant expressions or subexpressions in certian cases
  // even though x is non-const, a smart compiler may realize that x will always evaluate to 7,
  // and under the as if rule, optimize the program to replace x with 7
  std::cout << x << '\n';

  return 0;
}

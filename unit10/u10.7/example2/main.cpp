#include "type_aliases.h"
#include <iostream>

int main()
{
  Miles a {100000};
  Speed b { 23 };

  // both lines are identical
  typedef long x;
  using y = long;

  std::cout << a << '\n' << b << '\n';

  return 0;
}

#include "max.h"
#include <iostream>

void foo();

int main()
{
  foo();
  std::cout << max(1, 2) << '\n';
  std::cout << max(3.4, 3.5) << '\n';

  return 0;
}

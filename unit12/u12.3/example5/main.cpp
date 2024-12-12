#include <iostream>

int main()
{
  int x{5};
  int y{6};

  // reference variables are replaced with the referent they refer to
  int& ref{x};

  // x assign to y, since ref refers only to x
  // does NOT make ref refer to y
  ref = y;

  // prints 6
  std::cout << ref << ' ' << x << '\n';

  return 0;
}

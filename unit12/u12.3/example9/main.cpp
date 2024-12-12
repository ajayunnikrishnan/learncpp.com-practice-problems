#include <iostream>

int main()
{
  int x{5};

  int& ref{x};

  std::cout << x << ref << '\n';

  int y{6};

  ref = y;

  y+=3;

  std::cout << x << ref << '\n';

  x = 7;

  std::cout << x << ref << '\n';

  return 0;
}

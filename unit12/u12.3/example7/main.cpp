#include <iostream>

int main()
{
  int x{5};

  {
    int& ref{x};
    std::cout << ref << '\n';
  } // ref dies here

  std::cout << x << '\n';
} // x dies here

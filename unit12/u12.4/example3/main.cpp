#include <iostream>

int main()
{
  const int x{5};
  const int& ref{x};    // ok: ref is an lvalue reference to a const value

  return 0;
}

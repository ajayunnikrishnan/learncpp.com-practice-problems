#include <iostream>

int main()
{
  const int x{5};
  int& ref {x};   // error cannot modify a non modifiable referant

  return 0;
}

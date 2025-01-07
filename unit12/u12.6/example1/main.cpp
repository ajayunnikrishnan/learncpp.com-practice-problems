#include <iostream>

void printRef(const int& y)  // y is a const reference
{
  std::cout << y << '\n';
}

int main()
{
  int x {5};
  printRef(x);  // modifiably lvalue, binds y to x

  const int z {x};
  printRef(z);  // non-modifiable lvalue, binds y to z

  printRef(5);  // rvalue literal, binds y to temporary int object


  return 0;
}

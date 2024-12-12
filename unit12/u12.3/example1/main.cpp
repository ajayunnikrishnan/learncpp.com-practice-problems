#include <iostream>

int main()
{
  int x{5};
  // prefer attaching & with type
  int& refX{x};  // creates an lvalue reference to x

  ++refX;         // increment reference alias by 1 and consequently increment x by 1

  std::cout << x << ' ' << refX << '\n';

  // can place & anywhere between end of type and start of identifier
  int y{10};
  int &   refY{y};    // creates an lvalue reference to y

  std::cout << y << ' ' << refY << '\n';

  return 0;
}

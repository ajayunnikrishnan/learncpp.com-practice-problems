#include <iostream>

int main()
{
  int x {1};
  int y {++x};  // x is incremented to 6 (x = x + 1), then store this value as y

  std::cout << x << '\n';
  std::cout << y << '\n';

  return 0;
}

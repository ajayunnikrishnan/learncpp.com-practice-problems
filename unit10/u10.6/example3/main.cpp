#include <iostream>

int main()
{
  int x {5};
  int y {2};
  double d { static_cast<double>(x) / y};

  std::cout << d << '\n';

  return 0;
}

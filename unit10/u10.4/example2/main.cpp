#include <iostream>

int main()
{
  double d {3.5};

  int i {static_cast<int>(d)};

  std::cout << i << '\n';

  return 0;
}

#include <iostream>

void addOne(int x)
{
  ++x;  // modifies copy of x, not actual object x
}

int main()
{
  int x {5};

  std::cout << "value = " << x << '\n';

  addOne(x);

  std::cout << "value = " << x << '\n';  // x has not been modified

  return 0;
}

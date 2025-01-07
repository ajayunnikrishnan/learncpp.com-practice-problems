#include <iostream>

void addOne(int& y)
{
  ++y;  // modifies object x
}

int main()
{
  int x {5};

  std::cout << "value = " << x << '\n';

  addOne(x);

  std::cout << "value = " << x << '\n';  // x has been modified

  return 0;
}

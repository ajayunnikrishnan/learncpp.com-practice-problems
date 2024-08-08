#include <iostream>

int sumTo(int x)
{
  int total { 0 };

  // loop 1 - x times
  for (int i {1}; i <= x; ++i)
  {
    // add increment val to total
    total += i;
  }

  return total;
}

int main()
{
  std::cout << sumTo(5) << '\n';
  return 0;
}

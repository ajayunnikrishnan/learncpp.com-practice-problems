#include <iostream>

void print(int x)
{
  std::cout << x << '\n';
}

int main()
{
  print(static_cast<int>(5.6)); // explicit conversion of 5.5 (double) to type int

  return 0;
}

#include <iostream>

void print(int x, int y = 0)
{
  std::cout << x << '\n';
  std::cout << y << '\n';
}

int main()
{
  print(10, 20);
  print(10);  // calls default argument

  return 0;
}

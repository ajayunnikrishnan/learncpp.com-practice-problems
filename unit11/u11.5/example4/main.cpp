#include <iostream>

void print(int x=10, int y=20, int z=30)
{
  std::cout << x << ' ' << y << ' ' << z << '\n';
}

int main()
{
  print();

  return 0;
}

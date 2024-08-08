#include <iostream>

int main()
{
  int i {1};
  for (; i <= 5;)  // no init statment or end expression
  {
    std::cout << i << ' ';
    ++i;
  }
  std::cout << '\n';
  return 0;
}

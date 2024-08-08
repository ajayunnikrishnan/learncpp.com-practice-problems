#include <iostream>

int main()
{
  // print loop variable from 0-20 inclusive
  for (int i {}; i <= 20; i+=2)
  {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  return 0;
}

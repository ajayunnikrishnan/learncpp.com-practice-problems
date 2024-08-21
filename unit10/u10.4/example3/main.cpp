#include <iostream>

void print(unsigned int x)
{
  std::cout << x << '\n';
}

int main()
{
  std::cout << "Enter an integer: ";
  int n;
  std::cin >> n;   // enter 5 or -5

  print(n); // value may or may not be preserved


  return 0;
}

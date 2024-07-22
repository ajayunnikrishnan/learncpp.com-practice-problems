#include <iostream>

void print(int x)
{
  std::cout << x << '\n';
}

int main()
{
  // passed value 5.5 gets truncated to 5 as the input to print is an int
  print(5.5);

  return 0;
}

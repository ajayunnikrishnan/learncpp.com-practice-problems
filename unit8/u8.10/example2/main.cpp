// equivalant while loop of the previous for loop example
#include <iostream>

int main()
{
  int i { 1 };
  while (i <= 10)
  {
    std::cout << i << ' ';
    ++i;
  }
  std::cout << '\n';

  return 0;
}

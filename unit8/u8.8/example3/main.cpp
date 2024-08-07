#include <iostream>

int main()
{
  int i {15};

  // while loop never executes in the first place since i = 15
  while (i <= 10)
  {
    std::cout << i << ' ';
    ++i;
  }

  std::cout << "done!\n";

  return 0;
}

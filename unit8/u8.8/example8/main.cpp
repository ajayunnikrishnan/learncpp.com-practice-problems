#include <iostream>

int main()
{
  int i { 1 };
  // repeat 5 times
  while (i <= 5)
  {
    int j { 1 };
    // repeat i times
    while(j <= i)
    {
      std::cout << j << ' ';
      ++j;
    }

    std::cout << '\n';

    ++i;
  }

  return 0;
}

#include <iostream>

int main()
{
  for (int i {}; i < 10; ++i)
  {
    if (i % 4 == 0)
    {
      // skip to next iteration
      continue;
    }

    std::cout << i << '\n';
  }
  return 0;
}

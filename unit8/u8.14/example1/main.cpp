#include <iostream>
#include <random>  // for std::mt19937

int main()
{
  std::mt19937 mt;  // instantiate a 32 bit mersenne twister

  for (int i = 1; i <= 40; ++i)
  {
    std::cout << mt() << '\t';

    if (i % 5 == 0)
      std::cout << '\n';
  }

  return 0;
}

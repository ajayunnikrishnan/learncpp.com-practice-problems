#include <cstdint>
#include <iostream>

// watch out for overflow!
std::int64_t powCalc(int base, int exponent)
{
  std::int64_t total {1};
  for (int i {}; i < exponent; ++i)
  {
    total *= base;
  }
  return total;
}

int main()
{
  std::cout << powCalc(2,10) << '\n';

  return 0;
}

#include <cmath>
#include <iostream>

bool approximatelyEqualAbs(double a, double b, double absEpsilon)
{
  // if distance between a and b is less than or equal to epsilon, then values are "close enough"
  return std::abs(a - b) <= absEpsilon;
}

int main()
{
  double a {0.1 + 0.2};
  double b {0.3};
  double epsilon {0.0000001};
  // rounding errors are fixed
  std::cout << std::boolalpha << approximatelyEqualAbs(a, b, epsilon) << '\n';

  return 0;
}

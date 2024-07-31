#include <cmath> // for std::abs
#include <algorithm> // for std::max
#include <iostream>

// return true if the diffrence between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
  return ( std::abs( a - b ) <= std::max(a, b) * relEpsilon );
}
// return true if the diffrence between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqualAbs(double a, double b, double absEpsilon, double relEpsilon)
{
  if ( std::abs( a - b) <= absEpsilon )
    return true;
  return approximatelyEqualRel(a, b, relEpsilon);
}

int main()
{
  // should exqual 1 but does not due to rounding errors
  constexpr double a { 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
  constexpr double relEpsilon { 1e-8 };
  constexpr double absEpsilon { 1e-12 };

  std::cout << std::boolalpha;

  std::cout << approximatelyEqualRel(a, 1.0, relEpsilon) << '\n';  // compare "almost 1.0" to 1.0
  std::cout << approximatelyEqualRel(1.0 - a, 0.0, relEpsilon) << '\n';  // compare "almost 0.0" to 0.0

  std::cout << approximatelyEqualAbs(a, 1.0, absEpsilon, relEpsilon) << '\n';  // compare "almost 1.0" to 1.0
  std::cout << approximatelyEqualAbs(1.0 - a, 0.0, absEpsilon, relEpsilon) << '\n';  // compare "almost 0.0" to 0.0

  return 0;

}

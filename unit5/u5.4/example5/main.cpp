#include <iostream>
  /*
   *  In this case, since x is const, the compiler will no longer
   *  have to infer that x will not change throughout the prorgam and will
   *  replace any instantces of x with 5
   *
   *
   *  The ranking of variables by the likelihood of the compiler being able to optimize them is below:
   *    1) Compile-time constant variables (always eligible to be optimized)
   *    2) Runtime constant variables
   *    3) Non const variables (likely optimized in simple cases only)
   */

int main()
{
  const int x { 5 };
  std::cout << x << '\n'; // x is now const

  return 0;
}

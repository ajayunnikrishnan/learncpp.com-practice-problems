#include <iomanip> // for std::setprecision()
#include <iostream>

int main()
{
  std::cout << std::setprecision(17); // show 17 digits of precision, sticky function since std::cout will remain 17 digit precision until changed
  std::cout << 3.33333333333333333333333333333333333f << '\n'; // show 17 digit precision on type float (less sig figs)
  std::cout << 3.33333333333333333333333333333333333 << '\n'; // show 17 digit precision on type double (more sig figs)

  return 0;
}

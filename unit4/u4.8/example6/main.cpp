#include <iomanip>
#include <iostream>

int main()
{
  double d { 0.1 };
  std::cout << d << '\n';
  std::cout << std::setprecision(17);
  std::cout << d << '\n'; // rounding error at 17th digit, since type double is precise to 16 sig figs

  return 0;
}

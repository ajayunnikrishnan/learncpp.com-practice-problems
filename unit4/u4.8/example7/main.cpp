#include <iomanip>
#include <iostream>

int main()
{
  std::cout << std::setprecision(17);

  double d { 1.0 };
  std::cout << d <<'\n';

  double d2 { 0.1 +  0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
  std::cout << d2 <<'\n';

  return 0;
}

#include <iomanip>
#include <iostream>

int main()
{
  float f { 123456789.0f };
  std::cout << std::setprecision(9);
  std::cout << f << '\n'; // type float only precise to the 7th digit

  return 0;
}

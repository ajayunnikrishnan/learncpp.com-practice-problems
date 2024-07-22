#include <iostream>

// std::cout truncates significant digits after 6 sig figs
int main()
{
  std::cout << 9.234324f << '\n';
  std::cout << 2348.1234f << '\n';
  std::cout << 0.0000000000456456411123f << '\n';

  return 0;
}

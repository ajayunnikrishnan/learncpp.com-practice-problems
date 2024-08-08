#include <iostream>

int main()
{
  // one off error  prints 1-4 NOT 1-5 (use <= not <)
  for (int i {1}; i < 5; ++i)
  {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  return 0;
}

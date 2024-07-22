#include <cstddef>
#include <iostream>

int main()
{
  std::cout << sizeof(std::size_t) << '\n';

  int x { 5 };
  std::size_t s { sizeof(x) };
  std::cout << s << '\n';

  return 0;
}

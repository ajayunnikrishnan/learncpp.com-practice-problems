#include <iostream>

int main()
{
  unsigned int x { 5 };
  int s {static_cast<int>(x)};

  std::cout << s << '\n';

  return 0;
}

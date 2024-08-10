#include <iostream>
#include <cstdlib>

int main()
{
  std::cout << 1 << '\n';

  // abnormaly abort the program
  std::abort();

  // below statments are not run
  std::cout << 1 << '\n';
  return 0;
}

// Partial optimization of subexpressions
#include <iostream>

int main()
{
  // compilers evaluated constant subexpressions
  // for example, the compiler can optimize the subexpression 3 + 4 to 7
  std::cout << 3 + 4 << '\n';

  return 0;
}

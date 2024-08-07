/*
 *        acc(4) -> 4
 *        acc(3) -> 4 + 3
 *        acc(2) -> 4 + 3 + 2
 *        acc(1) -> 4 + 3 + 2 + 1
 * */
#include <iostream>

// accumulate has its own internal state since the variable total is static
// the downside is that we cannot reset the value of total without restarting the program
// another downside is that there is no way to have multiple accumulate functions running
int accumulate(int num)
{
  static int total {};

  total += num;

  return total;
}

int main()
{
  std::cout << accumulate(4) << '\n';  // prints 4
  std::cout << accumulate(3) << '\n';  // prints 7
  std::cout << accumulate(2) << '\n';  // prints 9
  std::cout << accumulate(1) << '\n';  // prints 1

  return 0;
}

#include <iostream>

int main()
{
  std::cout << (true? 1 : 2) << '\n';       // ok: both operands are matching type int
  std::cout << (false? 1 : 2.2) << '\n';    // ok: int val 1 gets converted to double
  std::cout << (true? -1 : 2u) << '\n';     // surprising result: -1 gets converted to unsigned in, result, out of range

  return 0;
}

// Best practice: avoid using comma operator, except within for loops
// Improved version of this example is in the example2 directory
#include <iostream>

int main()
{
  int x { 1 };
  int y { 2 };
  int z { 3 };

  std::cout << (++x, --y) << '\n'; // increments x, decrements y, then returns the right operand (y)

  z = (x, y); // left operand evaluated, right operand evaluted, return right operand, z is assigned value of right operand (y)
  z = x, y; // note: comma operator has the lowest precidence of all operators, so line evaluates as (z = x), y -> z, y -> return y

  return 0;
}

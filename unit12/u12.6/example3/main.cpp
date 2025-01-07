#include <iostream>

void printVal(double d)
{
  std::cout << d << '\n';
}

void printRef(const double& d)
{
  std::cout << d << '\n';
}

int main()
{
  printVal(5);  // 5 is converted to double wich is stored in a temporary variable, copied to parameter d (compiler usualy optimizes away 1 of the literal copies)
  printRef(5);  // 5 converted to double which is stored in a temporary variable (could be an expensive copy), then d binds to temporary variable

  return 0;
}

#include <iostream>

// best pratice: dont use const when pasing by value, since we generaly dont care
// if a function's parameters get changed (since it is a copy of the argument vals)
void printInt(const int x)
{
  std::cout << x << '\n';
}

int main()
{
  printInt(5); // 5 will be used as the initializer for x
  printInt(6); // 5 will be used as the initializer for x

  return 0;
}

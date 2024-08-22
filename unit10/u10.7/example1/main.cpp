#include <iostream>

int main()
{
  using Distance = double;  // using creates an alias for an existing data type

  Distance milesToDestination { 3.4 };  // compiler will substitute alias w/ type

  std::cout << milesToDestination << '\n';  // prints 3.4

  return 0;
}

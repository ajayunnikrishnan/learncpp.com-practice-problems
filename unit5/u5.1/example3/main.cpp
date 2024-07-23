#include <iostream>

// Best pracitce: dont use const when returning by value since there is tipically no point in returning const objects
// because they are temporary copies that will by destroyed anyways. Also it can impede some compiler optimizations which lowers preformance
const int getValue()
{
  return 5;
}

int main()
{
  std::cout << getValue() << '\n';

  return 0;
}

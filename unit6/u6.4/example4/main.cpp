// Best Practice: prefer prefix over postfix as prefix takes less steps to execute
#include <iostream>

int main()
{
  int x {};
  ++x;  // Prefix increments x by 1
  std::cout << x << '\n';

  x++;  // Postfix also increments x by 1, same behaviour in this case
  std::cout << x << '\n';

  return 0;
}

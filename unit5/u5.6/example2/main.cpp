#include <iostream>

int main()
{
  int x { 2 };
  int y { 1 };
  // evaluates to z = 2 not 8 since cpp prioritizes most operators over conditional operators
  int z { 10 - x > y ? x : y};
  // add brackets for clarity:
  /*int z { ( 10 - x ) > y ? x : y};*/
  
  std::cout << z << '\n';

  return 0;
}

// comma operators different than comma seperators
#include <iostream>

int add(int x, int y) // NOT a comma operator, function parameters are seperated by comma seperators
{
  return x + y;
}

int main()
{
  int num {add(5, 4)}; // comma seperator, used in argment

  std::cout << num << '\n';

  return 0;
}

#include <iostream>

// 1 way overloaded functions are differentiated if number of parameters are different

int add(int x, int y)  // 2 tot parameters
{
  return x + y;
}

int add(int x, int y, int z)  // 3 tot parameters
{
  return x + y + z;
}

int main()
{
  // function calls are to 2 different functions
  std::cout << add(1,2) << '\n';
  std::cout << add(1,2,3) << '\n';

  return 0;
}


#include <iostream>
#include <string>

template <typename T>
T addOne(T x)
{
  return x + 1;
}

int main()
{
  std::string s {"Hello World"};
  // wont compile since you cannot add an integer to std::string, function template instance produces erraneous result
  std::cout << addOne(s) << '\n';

  return 0;
}

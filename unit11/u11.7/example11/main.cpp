
#include <iostream>
#include <string>

template <typename T>
T addOne(T x)
{
  return x + 1;
}

// translation unit looks likes this for template function instance
template <>
std::string addOne(std::string x)
{
  // + operator cannot evaluate int with std::string
  return x + 1;
}

int main()
{
  std::string s {"Hello World"};
  // wont compile since you cannot add an integer to std::string, function template instance produces erraneous result
  std::cout << addOne(s) << '\n';

  return 0;
}

// no copies made!
#include <iostream>
#include <string_view>  // C++17

void printString(std::string_view x)
{
  std::cout << x << '\n';
}

int main()
{
  std::string_view s {"hello world"};
  printString(s);
  
  return 0;
}

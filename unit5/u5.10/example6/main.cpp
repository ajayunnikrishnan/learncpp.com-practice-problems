#include <iostream>
#include <string>
#include <string_view>

void printString(std::string text)
{
  std::cout << text << '\n';
}

int main()
{
  std::string_view s {"Hello World"};
  /*printString(s);  // compile error: string_view cannot implicitly be converted to string*/

  std::string s2 {s};
  printString(s2);  // ok, new variable created with type string

  printString(static_cast<std::string>(s2));  // ok, type converted to string

  return 0;
}

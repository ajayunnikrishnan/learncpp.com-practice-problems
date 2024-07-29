#include <iostream>
#include <string>
#include <string_view>

void printSV(std::string_view text)
{
  std::cout << text << '\n';
}

int main()
{
  printSV("C-style string literal");

  std::string s1 {"std::string type"};
  printSV(s1);

  std::string_view s2 {"std::string_view type"};
  printSV(s2);

  return 0;
}

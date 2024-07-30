#include <iostream>
#include <string>
#include <string_view>

int main()
{
  std::string s {"Hello World"};
  std::string_view sv {s};  // sv is now viewing s

  s = "Bye Bye World!!!!"; // s is assigned another value

  std::cout << sv << '\n'; // undefined behavior

  return 0;
}

#include <iostream>
#include <string>
#include <string_view>

int main()
{
  std::string s {"Hello World"};
  std::string_view sv {s};  // sv is now viewing s

  s = "Bye Bye World!!!!"; // s is assigned another value

  std::cout << sv << '\n'; // undefined behavior, sv is invalidated/dangling

  sv = s;  // revalidated sv by reassigning it to s
  std::cout << sv << '\n'; // Prints "Bye Bye World!!!!"

  return 0;
}

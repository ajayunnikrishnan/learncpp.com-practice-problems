#include <iostream>
#include <string>
#include <string_view>

int main()
{
  std::string name {"Ajay"};
  std::string_view sv {name};  // sv is now viewing name
  std::cout << sv << '\n';

  sv = "Alex";  // sv is now viewing Alex (does not change name)
  std::cout << sv << '\n';
  std::cout << name << '\n';

  return 0;
}

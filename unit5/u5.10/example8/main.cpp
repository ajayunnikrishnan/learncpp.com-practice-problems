#include <iostream>
#include <string>
#include <string_view>

using namespace std::string_literals;  // access s suffix
using namespace std::string_view_literals;  // access sv suffix

int main()
{
  std::cout << "Hello World" << '\n';  // C-style string literal
  std::cout << "Hello World"s << '\n';  // std::string literal
  std::cout << "Hello World"sv << '\n';  // std::string_view literal

  return 0;
}

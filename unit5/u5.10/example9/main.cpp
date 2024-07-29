#include <iostream>
#include <string_view>

int main()
{
  constexpr std::string_view s {"Hello there..."};  // string view has full support for constexpr keyword
  std::cout << s << '\n';

  return 0;
}

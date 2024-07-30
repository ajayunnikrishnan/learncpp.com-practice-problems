#include <iostream>
#include <string>
#include <string_view>

std::string_view firstAlphabetical(std::string_view s1, std::string_view s2)
{
  return s1 > s2? s1 : s2;
}

int main()
{
  std::string a {"12345"};
  std::string b {"123456"};
  // returning string_view is ok since a and b stil exist in this part of the code
  std::cout << firstAlphabetical(a, b) << '\n';

  return 0;
}

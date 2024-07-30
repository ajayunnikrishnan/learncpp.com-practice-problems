#include <iostream>
#include <string_view>

std::string_view getBoolName(bool b)
{
  if (b)
    return "true";  // returning C-style string is OK
  return "false";  // returning C-style string is OK
}

int main()
{
  std::cout << getBoolName(true) << ' ' << getBoolName(false) <<'\n';

  return 0;
}

#include <iostream>
#include <string>
#include <string_view>

std::string_view getBoolName(bool b)
{
  std::string t { "true" }; // local variable
  std::string f { "false" }; // local variable

  if (b)
    return t;  // return an std::string view object viewing t
  
  return f;  // return an std::string view object viewing f
} // t and f are destroyed here

int main()
{
  std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n';  // undefined behavior since string_view is viewing destroyed variables

  return 0;
}

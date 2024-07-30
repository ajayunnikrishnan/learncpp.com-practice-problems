#include <iostream>
#include <string>
#include <string_view>

std::string getString()
{
  std::string s {"Hello World"}; // s is within scope inside the function definition only
  return s;
} // s is destroyed here

int main()
{
  std::string_view sv {getString()}; // sv is initialized to view a destroyed string
  std::cout << sv <<'\n';  // undefined behavior

  return 0;
}

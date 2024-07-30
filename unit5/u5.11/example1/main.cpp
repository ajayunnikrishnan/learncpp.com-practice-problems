#include <iostream>
#include <string>
#include <string_view>

int main()
{
  std::string_view sv {};  // create sv type string view

  {  // create a nested block
    std::string s {"Hello World"};  // create a string s
    sv = s; // sv is now viewing s
  }  // s is destroyed, sv is viewing an invalid string
  
  std::cout << sv << '\n'; // undefiend behaviour

  return 0;
}

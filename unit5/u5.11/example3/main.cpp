#include <iostream>
#include <string>
#include <string_view>

int main()
{
  using namespace std::string_literals;
  std::string_view sv {"Ajay Unnikrishnan"s}; // "Ajay Unnikrishnan"s creates a temporary std::string that is deleted after this line executes

  std::cout << sv << '\n';  // undefined behavior

  return 0;
}

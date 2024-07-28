#include <iostream>
#include <string>

int main()
{
  constexpr std::string x {" will error out pre C++20"};  // constant expression std string only suported on C++20 and up in some cases only

  return 0;
}

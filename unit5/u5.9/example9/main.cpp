#include <iostream>
#include <string> // for std::string

using namespace std::string_literals;

int main()
{
  std::cout << "c-style string literal" << '\n';
  std::cout << "std::string literal"s << '\n';

  return 0;
}

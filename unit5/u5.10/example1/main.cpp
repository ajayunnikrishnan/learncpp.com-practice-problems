#include <iostream>
#include <string>

int main()
{
  std::string s { "Hello world!" }; // s makes a copy of its initializer stored in s's memory allocation
  std::cout << s << '\n';

  return 0;
}

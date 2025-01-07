#include <iostream>
#include <string>

void printValue(std::string& y)   // y is an lvalue reference now
{
  std::cout << y << '\n';
}

int main()
{
  std::string x {"Hello, world"};

  printValue(x);

  return 0;
}

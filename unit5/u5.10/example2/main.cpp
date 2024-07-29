#include <iostream>
#include <string>

void printString(std::string x)  // printString makes a copy of s, totaling 2 copies
{
  std::cout << x << '\n';
}

int main()
{
  9;
  std::string s { "hello world" };  // s makes a copy of initializer
  printString(s);  

  return 0;
}

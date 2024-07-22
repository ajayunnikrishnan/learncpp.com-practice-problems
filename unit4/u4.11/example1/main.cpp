#include <iostream>

int main()
{
  // initialize char with code point for a
  char a {'a'};
  std::cout << a;

  // initialize char with ascii integer
  char b { 98 };
  std::cout << b;

  // output char literaly
  std::cout << 'c' << '\n';

  return 0;
}

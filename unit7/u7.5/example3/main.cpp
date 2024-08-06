#include <iostream>

int value { 5 };  // value is a global variable

void foo()
{
  std::cout << "global variable value: " << value << '\n';  // value not shadowed here
}

int main()
{
  int value { 7 }; // hides global variable (where local variable is in-scope)

  ++value; // increment local value

  std::cout << "local variable value: " << value << '\n';

  foo();

  return 0;
} // local value is destroyed

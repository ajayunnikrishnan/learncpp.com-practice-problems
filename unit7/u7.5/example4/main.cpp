#include <iostream>

int value { 8 };

int main()
{
  int value { 5 };  // global variable hidden

  ++value;  // increments local variable
  --(::value);  // decrement global value with scope resolution operatior

  std::cout << "local value is: " << value << '\n';
  std::cout << "global value is: " << ::value << '\n';

  return 0;
}

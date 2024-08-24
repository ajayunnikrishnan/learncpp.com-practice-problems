#include <iostream>

// Here's a function template with a static local variable that is modified
template <typename T>
void printIDAndValue(T value)
{
  static int id{ 0 };
  std::cout << ++id << ") " << value << '\n';
}

int main()
{
  // each function instantated by the template will have its own static variable, so this program will not work
  // as expected
  printIDAndValue(12);
  printIDAndValue(13);

  // new function template instance created, new static local variable created
  printIDAndValue(14.5);

  return 0;
}

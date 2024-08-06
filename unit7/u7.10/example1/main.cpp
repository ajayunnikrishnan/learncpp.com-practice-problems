#include <iostream>

void incrementAndPrint()
{
  int value { 1 };  // automatic duration (destroyed at end of bloc)
  ++value;  // increment value
  std::cout << value << '\n';
}

int main()
{
  incrementAndPrint();
  incrementAndPrint();
  incrementAndPrint();

  return 0;
}

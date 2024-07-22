#include <iostream>

// retrun a user inputed operation to the caller
char getOperation()
{
  std::cout << "Enter +,-,*,/: ";
  char x {};
  std::cin >> x;

  return x;
}

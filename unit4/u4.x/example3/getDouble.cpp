#include <iostream>

// retrun a user inputed double to the caller
double getDouble()
{
  std::cout << "Enter a double value: ";
  double x {};
  std::cin >> x;

  return x;
}

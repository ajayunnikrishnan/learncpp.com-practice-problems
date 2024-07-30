// floating point verson of previous program in example2 directory 
#include <iostream>

int main()
{
  constexpr int apples { 12 };
  std::cout << "You have " << apples << " apples. Enter how many people to divide them between: ";
  double x {};
  std::cin >> x;

  // Dividing by 0.0 results in undefined behaviour
  std::cout << "each person gets " << apples / x << " apples.\n";

  return 0;
}

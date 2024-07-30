#include <iostream>

int main()
{
  constexpr int apples { 12 };
  std::cout << "You have " << apples << " apples. Enter how many people to divide them between: ";
  int x {};
  std::cin >> x;

  // Dividing by zero results in undefined behaviour
  std::cout << "each person gets " << apples / x << " apples.\n";

  return 0;
}

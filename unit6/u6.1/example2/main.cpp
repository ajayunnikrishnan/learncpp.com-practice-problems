#include <iostream>

int getValue()
{
  std::cout << "Enter a number: ";
  int x {};
  std::cin >> x;

  return x;
}

void printCalculation(int x, int y, int z)
{
  std::cout << x + (y * z) << '\n';
}

int main()
{
  // seperating argument into deffent satments solves argument order issue
  int a {getValue()};
  int b {getValue()};
  int c {getValue()};

  printCalculation(a, b, c);  // Clang evaluates arguments L -> R, GCC evaluates arguments R -> L, giving diffent outputs per compiler

  return 0;
}

#include <iostream>

int add(int x, int y)
{
  return x + y;
}

double add(double x, double y)
{
  return x + y;
}

int main()
{
  std::cout << add(4, 5) << '\n';         // calls add w/ int parameters
  std::cout << add(4.5, 5.5) << '\n';     // calls add w/ double parameters

  return 0;
}

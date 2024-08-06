#include <iostream>

namespace constants
{
  const double gravity { 9.8 };
}

double getVelocity(int time, double gravity)
{
  return gravity * time;
}

int main()
{
  std::cout << getVelocity(5, constants::gravity) << '\n';

  return 0;
}

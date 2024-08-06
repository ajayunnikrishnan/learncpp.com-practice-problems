#include <iostream>

namespace constants
{
  const double gravity { 9.8 };
}

double getVelocity(int time)
{
  return constants::gravity * time;
}

int main()
{
  std::cout << getVelocity(5) << '\n';

  return 0;
}

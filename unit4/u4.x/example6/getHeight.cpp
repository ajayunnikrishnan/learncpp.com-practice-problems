#include "ball.h"
#include <iostream>

double getHeight()
{
  std::cout << "Enter the height of the tower in meters: ";
  double height{};
  std::cin >> height;

  return height;
}

#include "ball.h"
#include <iostream>

void printHeight(double currentHeight, int time)
{
  if (currentHeight > 0)
    std::cout << "At " << time << " seconds, the ball is at height: " << currentHeight << " meters\n";

  else
    std::cout << "At " << time << " seconds, the ball hit the ground.\n";
}

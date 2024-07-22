#include "ball.h"

double calculateHeight(double towerHeight, int time)
{
  double gravity = 9.8;
  double heightFallen = 9.8 * time * time / 2;
  double currentHeight = towerHeight - heightFallen;

  return currentHeight;
}

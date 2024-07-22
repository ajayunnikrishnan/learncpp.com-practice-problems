#include "ball.h"

void calculateAndPrintHeight(double towerHeight, int time)
{
  double currentHeight = calculateHeight(towerHeight, time);
  printHeight(currentHeight, time);
}

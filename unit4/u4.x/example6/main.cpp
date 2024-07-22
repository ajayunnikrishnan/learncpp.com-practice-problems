#include "ball.h"

int main()
{
  double height {getHeight()};

  calculateAndPrintHeight(height, 0);
  calculateAndPrintHeight(height, 1);
  calculateAndPrintHeight(height, 2);
  calculateAndPrintHeight(height, 3);
  calculateAndPrintHeight(height, 4);
  calculateAndPrintHeight(height, 5);

  return 0;
}

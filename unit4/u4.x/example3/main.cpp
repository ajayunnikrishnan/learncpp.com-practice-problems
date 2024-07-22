#include "calculator.h"

int main()
{
  double x {getDouble()};
  double y {getDouble()};
  char operation {getOperation()};

  calculate(x,y,operation);

  return 0;
}

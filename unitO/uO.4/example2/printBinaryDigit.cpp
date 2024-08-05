#include "question_6.h"

// check if number is above or below power of 2
int printBinaryDigit(int num, int power)
{
  if ( num >= power)
  {
    return printBinaryDigit1(num, power);
  }

  return printBinaryDigit0(num, power);
}

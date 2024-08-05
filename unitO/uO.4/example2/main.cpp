#include "question_6.h"
#include <iostream>

int main()
{

  // Get decimal value from 0-255
  int x { getUserInput( "Enter a decimal value from 0-255: " ) };

  x = printBinaryDigit(x, 128);
  x = printBinaryDigit(x, 64);
  x = printBinaryDigit(x, 32);
  x = printBinaryDigit(x, 16);
  
  std::cout << ' ';

  x = printBinaryDigit(x, 8);
  x = printBinaryDigit(x, 4);
  x = printBinaryDigit(x, 2);
  x = printBinaryDigit(x, 1);

  std::cout << '\n';

  return 0;
}

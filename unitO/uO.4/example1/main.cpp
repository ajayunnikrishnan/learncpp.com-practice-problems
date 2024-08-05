// example w/ header files in example2 directory
#include <iostream>

/*
 *      (mapping out the decimal to binary proccess)
 *      72
 *      72-64=8 -> 1
 *      8-32 -> 0
 *      8-16 -> 0
 *      8-8=0 -> 1
 *      0-4 -> 0
 *      0-2 -> 0
 *      0-1 -> 0
 *
**/

int printBinaryDigit1(int num, int power)
{
  std::cout << '1';
  return (num - power);
}

int printBinaryDigit0(int num, int power)
{
  std::cout << '0';
  return num;
}

// check if number is above or below power of 2
int printBinaryDigit(int num, int power)
{
  if ( num >= power)
  {
    return printBinaryDigit1(num, power);
  }

  return printBinaryDigit0(num, power);
}


int main()
{
  // Get decimal value from 0-255
  std::cout << "Enter a decimal value from 0-255: ";
  int x {};
  std::cin >> x;

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

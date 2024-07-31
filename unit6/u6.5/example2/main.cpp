// Best practice: avoid using comma operator, except within for loops
#include <iostream>

int main()
{
  int x { 1 };
  int y { 2 };
  int z { 3 };

  ++x;

  std::cout << --y << '\n'; 

  //z = (x, y); / replacement below
  z = y;

  //z = x, y; // replacement below
  z = x;
  z = y;

  return 0;
}

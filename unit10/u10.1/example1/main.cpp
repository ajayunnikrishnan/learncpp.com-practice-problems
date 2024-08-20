#include <iostream>
// implicit type conversion
int main()
{
  double d{ 3 }; // int value 3 implicitly converted to type double
  d = 6; // int value 6 implicitly converted to type double

  int y = 3.5;  // copy initilazation allows conversions that result in data loss
  std::cout << y << '\n';

  /*int x { 3.5 }; // brace-initialization disallows conversions that result in data loss*/
  /*std::cout << x << '\n';*/

  return 0;
}

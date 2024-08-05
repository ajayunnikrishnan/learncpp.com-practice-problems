#include <iostream>

int main()
{
  int x { 5 };  // x enters scope here

  {
    int y { 10 };  // y enters scope here
    // x and y can be accesed here
    std::cout << x << " + " << y << " = " << x + y << '\n';
  }  // y is destroyed here
  
  return 0;
}  // x is destroyed here

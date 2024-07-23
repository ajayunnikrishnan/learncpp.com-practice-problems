#include <iostream>

// Best practice: prefer constant variables over object like macros with substitution text
void someFcn()
{
  #define gravity 9.8
}

void printGravity(double gravity)
{
  // naming conflict occurs from parameter gravity and macro gravity since
  // the macro gravity is in scope from point of declaration to end of the file
  // regardless of if it is inside the someFcn()
  // so program wont compile
  std::cout << "gravity: " << gravity << '\n';
}

int main()
{
  printGravity(3.71);

  return 0;
}

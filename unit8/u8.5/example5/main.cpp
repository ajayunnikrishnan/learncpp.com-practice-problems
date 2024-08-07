#include <iostream>

void printNumber(int x)
{
  // break statments end the execution of the switch statment and starts at the line after the switch statment ends
  // return alternativly completely exits the function

  switch (x)
  {
  // case labels are not indented as they do not define a nested scope (lines between cases are actually all in the scame scope)
  case 1:
    std::cout << "One" << '\n';
    break;
  case 2:
    std::cout << "Two" << '\n';
    break;
  case 3:
    std::cout << "Three" << '\n';
    break;
  default:
    std::cout << "unknown" << '\n';
    break;
  }

  std::cout << "hahahaha" << '\n';
}

int main()
{
  printNumber(4);
  return 0;
}

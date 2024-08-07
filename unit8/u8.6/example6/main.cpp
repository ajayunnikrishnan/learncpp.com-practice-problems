#include <iostream>

int calculate(int x, int y, char operation)
{
  switch (operation)
  {
  case '+':
    return x + y;
  case '-':
    return x - y;
  case '*':
    return x * y;
  case '/':
    return x / y;
  default:
    std::cout << "Error: invalid input\n";
    return 0;
  }
}

int main()
{
  // get input for x
  std::cout << "Enter an integer: ";
  int x {};
  std::cin >> x;


  // get input for y
  std::cout << "Enter another integer: ";
  int y {};
  std::cin >> y;

  // get input for operation
  std::cout << "Enter an operation: ";
  char operation {};
  std::cin >> operation;

  // print calculation
  int result { calculate(x, y, operation ) };
  std::cout << x << ' ' << operation << ' ' << y << " is: " << result << '\n';

  return 0;
}

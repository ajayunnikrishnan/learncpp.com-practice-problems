#include <iostream>

constexpr bool isEven(int num)
{
  // if num is divisible by 2 it is even, else it is odd
  return num % 2 == 0;
}

int main()
{
  // get user input
  std::cout << "Enter an integer: ";
  int x {};
  std::cin >> x;

  // print if even or odd
  if ( isEven( x ) )
    std::cout << x << " is even\n";
  else
    std::cout << x << " is odd\n";

  return 0;
}

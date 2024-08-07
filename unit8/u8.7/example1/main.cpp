#include <iostream>
#include <cmath> // for std::sqrt()

int main()
{
  double x {};
tryAgain:  // this is a statement label
  std::cout << "Enter a non-negative number: ";
  std::cin >> x;

  if (x <= 0)
    goto tryAgain;  // this is a goto statement
  
  std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';

  return 0;
}

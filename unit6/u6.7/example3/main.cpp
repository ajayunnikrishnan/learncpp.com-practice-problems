#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x {};
  std::cin >> x;

  if ( x > 10 && x < 20)
    std::cout << "number in range (10, 20)\n";
  else
    std::cout << "number out of range (10, 20)\n";

  return 0;
}

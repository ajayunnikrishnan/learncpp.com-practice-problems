#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x {};
  std::cin >> x;
  
  if (x == 0)
    std::cout << "The value is zero\n";

  return 0;
}

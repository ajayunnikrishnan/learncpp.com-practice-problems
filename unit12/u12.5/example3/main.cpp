#include <iostream>

void printAdress(int value, int& ref)
{
  std::cout << "The address of the value parameter is: " << &value << '\n';
  std::cout << "The address of the reference parameter is: " << &ref << '\n';
}

int main()
{
  int x {4};
  std::cout << "The address of the x is: " << &x << '\n';
  printAdress(x, x);

  
  return 0;
}

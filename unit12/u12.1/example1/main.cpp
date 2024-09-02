#include <iostream>

int main()
{
  int num1 {};
  int den1 {};

  int num2 {};
  int den2 {};

  char ignore {};

  std::cout << "Enter a fraction: ";
  std::cin >> num1 >> ignore >> den1;

  std::cout << "Enter another fraction: ";
  std::cin >> num2 >> ignore >> den2;

  std::cout << "2 fractions multiplied together is: "
    << num1 * num2 << " / " << den1 * den2 << '\n';

  return 0;
}

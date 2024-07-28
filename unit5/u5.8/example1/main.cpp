#include <iostream>

constexpr double calcCircumference(double radius)
{
  constexpr double pi { 3.14156265359 };
  return 2.0 * pi * radius;
}

int main()
{
  constexpr double circumference { calcCircumference(3.0) }; // program compiles since calcCircumference can be used in a constant expression

  std::cout << circumference << '\n';

  return 0;
}

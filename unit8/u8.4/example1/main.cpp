#include <iostream>

int main()
{
  constexpr double gravity { 9.8 };

  if (gravity == 9.8)  // this statement will always evaluate as true, and can be compile time optimized by making the if statment constexpr
    std::cout << "Gravity is normal" << '\n';
  else
    std::cout << "Gravity is not normal" <<'\n';

  return 0;
}

#include <iostream>

int main()
{
  constexpr int x { 5 };
  std::cout << (x != 5) ? x : "x is 5"; // compile error: compiler can't find common type for constexpr int and C-style string literal
  
  return 0;
}

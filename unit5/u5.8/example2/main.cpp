#include <iostream>

// constexpr functions also be run at run-time (not only compile time) this is so
// that you do not need duplicate funciton (1 constexpr, one not) for compile-time and runtime

constexpr int isGreater(int x, int y)
{
  return x > y? x : y;
}

int main()
{
  int x{ 5 };
  int y{ 6 };

  std::cout << isGreater(x,y) << '\n'; // evaluated at runtime

  constexpr int a{ 5 };
  constexpr int b{ 6 };

  std::cout << isGreater(a,b) << '\n'; // evaluated at compile-time


  return 0;
}

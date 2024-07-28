#include <iostream>

// constexpr functions are also inline functions, and cannot be forward declared in another .cpp file
constexpr int greater(int x, int y)
{
  return x > y? x : y;
}

int main()
{
  constexpr int g { greater(5, 6) };

  std::cout << g << '\n'; // always evaluated at compile time

  std::cout << greater(5, 6) << '\n'; // may be evaluated at compile time

  int x { 5 };
  std::cout << greater(x, 6) << '\n'; // likely evaluated at run-time

  std::cin >> x;
  std::cout << greater(x, 6) << '\n'; // always evaluated at runtime

  return 0;
}

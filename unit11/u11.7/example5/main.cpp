#include <iostream>

template <typename T>
T max(T x, T y)
{
  return (x > y) ? x : y;
}

int main()
{
  // instead of this:
  std::cout << max<int>(1, 2) << '\n'; // specifying we want to call max<int>

  // we can use template argument deduction
  std::cout << max<>(1,2) << '\n';
  std::cout << max(1,2) << '\n';

  return 0;
}

#include <iostream>

template <typename T>
T max(T x, T y)
{
  return (x > y) ? x : y;
}

int main()
{
  auto x {max(1.2f,2.0f)};

  std::cout << max(4,5) << '\n';  // comparing ints
  std::cout << max(4.5,5.1) << '\n';  // comparing doubles
  std::cout << max('4', 'a') << '\n';  // comparing chars

  std::cout << sizeof(x) << '\n';
  std::cout << sizeof(double) << '\n';

  return 0;
}

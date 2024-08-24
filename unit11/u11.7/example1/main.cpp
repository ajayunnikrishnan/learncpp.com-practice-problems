#include <iostream>

template <typename T>
T max(T x, T y)
{
  return (x > y) ? x : y;
}

int main()
{
  auto maxNum { max<int>(10,1) };
  std::cout << maxNum << '\n';

  return 0;
}

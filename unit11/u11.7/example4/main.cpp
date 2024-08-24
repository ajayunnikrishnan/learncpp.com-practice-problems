#include <iostream>

template <typename T>
T max(T x, T y);

// int template instancee (specialization)
template <>
int max<int>(int x, int y)
{
  return (x > y) ? x : y;
}

// double template instance (specialization)
template <>
double max<double>(double x, double y)
{
  return (x > y) ? x : y;
}

int main()
{
  std::cout << max<int>(1, 2) << '\n';  // instantiates and calls function max<int>(int, int)
  std::cout << max<int>(4, 3) << '\n';  // calls pre-existing function max<int>(int, int)
  std::cout << max<double>(5.0, 1.1) << '\n';  // instantiates and calls function max<double>(double, double)

  return 0;
}

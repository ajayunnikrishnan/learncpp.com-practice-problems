#include <iostream>

template <typename T>
T max(T x, T y)
{
  std::cout << "max<int>(int) used\n";
  return (x > y) ? x : y;
}

int max(int x, int y)
{
  std::cout << "max(int) used\n";
  return (x > y) ? x : y;
}

int main()
{
  std::cout << max<int>(1,2) << '\n';
  std::cout << max<>(1,2) << '\n';
  // will prefer regular max function over equally apllicable template max function
  std::cout << max(1,2) << '\n';

  return 0;
}

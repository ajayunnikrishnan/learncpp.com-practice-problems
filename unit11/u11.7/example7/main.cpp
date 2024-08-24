#include <iostream>

template <typename T>
void print(T x)
{
  std::cout << x;
}

void print(bool x)
{
  std::cout << std::boolalpha << x;
}

int main()
{
  // calls templated bool
  print<bool>(true);
  std::cout << '\n';

  // calls templated bool using template argument deduction
  print<>(true);
  std::cout << '\n';

  // calls overloaded function print()
  print(true);
  std::cout << '\n';

  return 0;
}

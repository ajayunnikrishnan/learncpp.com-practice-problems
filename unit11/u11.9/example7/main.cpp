#include <iostream>

// abreviated function template (C++20)
auto max(auto x, auto y)
{
    return (x < y) ? y : x;
}

int main()
{
  std::cout << max(2, 3.5) << '\n';
  std::cout << max(3.5, 2) << '\n';

  return 0;
}

#include <iostream>

template <typename T>
T addOne(T x)
{
  return x + 1;
}

template<>
const char* addOne(const char*) = delete;

int main()
{
  // does not semantically make sense
  std::cout << addOne("Hello, world!") << '\n';

  return 0;
}

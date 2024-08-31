// this program will not work:
// when main calls addOne<int>(int) or addOne<double>(double)
// it checks for the template, which does not have a definition (since it is in another file!!)
// program fails to compile

#include <iostream>

template <typename T>
T addOne(T x);   // forward declaration

int main()
{
  std::cout << addOne(1) << '\n';
  std::cout << addOne(3.4) << '\n';

  return 0;
}

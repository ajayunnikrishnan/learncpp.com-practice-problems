#include <iostream>

// negative numbers wrap around (no defencive programming to prevent this)
void doSomething(unsigned int x)
{
  std::cout << "x is: " << x << '\n';
}


int main()
{
  doSomething(-1);

  return 0;
}

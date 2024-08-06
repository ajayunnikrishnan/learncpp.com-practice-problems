#include <iostream>

int g_mode;

void doSomething()
{
  g_mode = 2;
}

int main()
{
  g_mode = 1;
  doSomething();

  // programmer still expects g_mode to be 1
  // But doSomething changed gmode from 1 to 2

  if (g_mode == 1)
    std::cout << "Everything is fine" << '\n';
  else
    std::cout << "launching nuclear missiles..." << '\n';

  return 0;
}

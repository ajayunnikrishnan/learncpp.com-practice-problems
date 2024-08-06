// Bad practice: do not use static local variables to change program flow as it can have unexpected outcomes
#include <iostream>

int getInteger()
{
  static bool s_isFirstCall { true };

  if (s_isFirstCall)
  {
    std::cout << "Enter an integer: ";
    s_isFirstCall = false;
  }
  else
  {
    std::cout << "Enter another integer: ";
  }

  int i {};
  std::cin >> i;
  return i;
}

int main()
{
  // running same functions gives different outputs (hard to debug unless we know exactly how getInteger works)
  int a { getInteger() };
  int b { getInteger() };
  int c { getInteger() };
  int d { getInteger() };

  return 0;
}

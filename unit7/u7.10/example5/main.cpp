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
  std::cout << "Addition\n";

  int a{ getInteger() };
  int b{ getInteger() };

  std::cout << a << " + " << b << " = " << (a + b) << '\n';

  std::cout << "Subtraction\n";

  // getInteger is not reusable since it has its own internal state that cannot be reset from the outside
  // static local variables only make sense when the program need a unique variable and it when it wouldnt make senese to reset it
  // a better way to do this would be to pass s_isFirstCall as a boolean argument
  int c{ getInteger() };
  int d{ getInteger() };

  std::cout << c << " - " << d << " = " << (c - d) << '\n';

  return 0;
}

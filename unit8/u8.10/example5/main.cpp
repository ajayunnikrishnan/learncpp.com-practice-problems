#include <iostream>

int main()
{
  for (int i {}; i < 10; ++i)  // loop terminates with < symbol
  {
    std::cout << i;
    if (i == 9) ++i;
  }
  
  for (int i {}; i != 10; ++i)  // infinit loop with != symbol
  {
    std::cout << i;
    if (i == 9) ++i;
  }

  return 0;
}

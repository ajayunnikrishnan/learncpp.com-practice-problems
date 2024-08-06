#include <iostream>

int g_x {};  // initialized global variable g_x

void doSomething()
{
  g_x = 3;
  std::cout << g_x << '\n';
}

int main()
{
  doSomething();
  std::cout << g_x << '\n';

  // global variables can be seen and used anywhere in teh file
  g_x = 5;
  std::cout << g_x << '\n';

  return 0;
}
// g_x goes out of scope here (at the end of file)

#include <iostream>

static int g_x { 3 };  // g_x is an internal variable (internal linkage)

int main()
{
  std::cout << g_x <<'\n';
  
  return 0;
}

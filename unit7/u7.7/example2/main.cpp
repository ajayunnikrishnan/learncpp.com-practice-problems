#include <iostream>

extern int g_x;  // forward declare g_x via extern keyword
extern const int g_y;  //forward declare g_y via extern keyword

int main()
{
  std::cout << "g_x = " << g_x << ' ' << "g_y = " << g_y << '\n';
  return 0;
}

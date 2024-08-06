#include <iostream>

// make g_x have internal linkage (can be accesed from this file only)
static int g_x {}; // non const global variables have external linkage by default

const int g_y { 1 };  // const variables have internal linkage by default
constexpr int g_z { 2 };  // constexpr variables have internal linkage by default

int main()
{
  std::cout << g_x << ' ' << g_y << ' ' << g_z << '\n';
  return 0;
}

#include <iostream>

int main()
{
  std::cout << 5.0 << '\n'; // no suffix -> is type double by default
  std::cout << 5.0f << '\n'; // 5.0f is type float
  
  float f {4.1}; // 4.1 is a double literal not a float literal (include f suffix)
  
  return 0;
}

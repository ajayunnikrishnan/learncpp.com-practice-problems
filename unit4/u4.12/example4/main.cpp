#include <iostream>

int main()
{
  char a { 97 }; // ASCII value of 'a'
  std::cout << a << " has a value of: " << static_cast<int>(a) << '\n'; // converted a to its integral value (int type)

  return 0;
}

#include <iostream>

int main()
{
  // Helloworld is a string literal (multiple characters) and is enclosed in double quotes
  // there is actually one more hidden character at the end ('\0') called a null terminator
  // it is used to indicate the end of a string
  std::cout << "Hello, world!";

  // x and \n are chars (single character) and are enclosed in single quotes
  std::cout << 'x' << '\n';

  return 0;
}

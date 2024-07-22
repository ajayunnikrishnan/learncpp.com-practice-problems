#include <iostream>

int main()
{
  // get user input and store it as a char
  std::cout << "Enter a single character: ";
  char ch {};
  std::cin >> ch;

  // printed ASCII code via converting inputed char to int
  std::cout << "You entered '" << ch << "' which has ASCII code " << static_cast<int>(ch) << '.'<< '\n';

  return 0;
}

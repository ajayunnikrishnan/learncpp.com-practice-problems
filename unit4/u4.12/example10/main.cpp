#include <iostream>

int main()
{
  // get user input and store it as a char
  std::cout << "Enter a single character: ";
  char ch {};
  std::cin >> ch;

  // used int variable to implicitly convert char to int, you could also use a function that takes in an int
  int ascii{ ch };

  // printed ASCII code via implicit conversion
  std::cout << "You entered '" << ch << "' which has ASCII code " << ascii << '.'<< '\n';

  return 0;
}

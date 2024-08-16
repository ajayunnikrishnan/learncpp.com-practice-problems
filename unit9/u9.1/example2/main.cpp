#include <iostream>

bool isLowerVowel(char ch)
{
  switch (ch)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    return true;
  default:
    return false;
  }
}

int main()
{
  // informal test
  std::cout << std::boolalpha;
  std::cout << isLowerVowel('a') << '\n';
  std::cout << isLowerVowel('s') << '\n';

  return 0;
}

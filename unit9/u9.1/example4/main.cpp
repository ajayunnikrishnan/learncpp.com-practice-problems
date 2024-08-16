#include <iostream>

bool isLowerVowel(char c)
{
  switch (c)
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

int testVowel()
{
  if (!isLowerVowel('a')) return 1;
  if (isLowerVowel('q')) return 2;

  return 0;
}

int main()
{
  int test {testVowel()};

  if (test != 0)
    std::cout << "Vowel test " << test << " failed\n";
  else
    std::cout << "testVowel() tests passed.\n";

  return 0;
}

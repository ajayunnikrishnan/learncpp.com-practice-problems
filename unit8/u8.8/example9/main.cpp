#include <iostream>

int main()
{
  char i {'a'};

  // using the char's ascii values for condition
  while (i <= 'z')
  {
    // print char + its ascii value
    std::cout << i << ' ' << static_cast<int>(i) << ' ';
    ++i;
  }
  std::cout << '\n';

  return 0;
}

#include <iostream>

int main()
{
  for (char c {'a'}; c <= 'e'; ++c)
  {
    std::cout << c;

    for (int i {}; i < 3; ++i)
    {
      std::cout << i;
    }

    std::cout << '\n';
  }
}

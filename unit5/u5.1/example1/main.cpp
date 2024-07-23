#include <iostream>

int main()
{
  std::cout << "Enter your age: ";
  int age{};
  std::cin >> age;

  // initialized constant variable (cannot reassign value to it later)
  const int constAge{ age };

  std::cout << "constAge is " << constAge << '\n';

  return 0;
}

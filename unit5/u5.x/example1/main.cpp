#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  // problem: std::unint8_t behaves as type char, avoid using it, instead use uint16_t
  int age {};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: ";

  const int minAge {16};

  // 16 although abvious is a magic number, and since it is a constant use const
  if (age >= minAge)
    std::cout << "Yes";
  else
    std::cout << "No";

  std::cout << ".\n";

  return 0;
}

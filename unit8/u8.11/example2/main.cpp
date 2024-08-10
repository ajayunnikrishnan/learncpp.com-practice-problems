#include <iostream>

int main()
{
  int sum{};

  for (int i; i<10; ++i) {
    std::cout << "enter a number to add, press 0 to exit: ";
    int num;
    std::cin >> num;
    sum+=num;

    if (num==0)
      break;
  }
  std::cout << "The sum of all entered numbers is: " << sum << '\n';
  return 0;
}

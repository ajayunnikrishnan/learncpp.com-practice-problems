#include <iostream>

int main()
{
  // exiting an infinite loop
  while (true) {
    std::cout << "Enter 0 to exit loop and any other integer to continue: ";
    int num;
    std::cin >> num;

    if (num==0) {
      break;
    }
  }
}

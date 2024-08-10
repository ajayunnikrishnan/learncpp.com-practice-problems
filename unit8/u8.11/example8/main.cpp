// used break statement instread of bool variable to exit infinite loop
#include <iostream>

int main() {
  int count{};

  while (true) {
    std::cout << "Enter 'e' to exit the loop or any other character to continue looping: ";
    char ch{};
    std::cin >> ch;

    if (ch == 'e') {
      ++count;
      break;
    } else {
      ++count;
    }
  }

  std::cout << "You looped " << count << " times\n";
  return 0;
}

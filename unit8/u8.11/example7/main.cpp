// This program uses a boolean variable to exit the loop instead of a continue statment (shown in next example)
#include <iostream>

int main() {

  int count {};
  bool keepLooping {true};

  while (keepLooping) {
    std::cout << "Enter 'e' to exit the loop or any other character to continue looping: ";
    char ch{};
    std::cin >> ch;

    if (ch == 'e') {
      ++count;
      keepLooping = false;
    } else {
      ++count;
    }
  }

  std::cout << "You looped " << count << " times\n";
  return 0;
}

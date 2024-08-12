#include <iostream>

unsigned int LCG16() {

  static unsigned int s_state{0};

  s_state = 38923 * s_state - 23294;

  return s_state;
}

int main() {

  for (int i {1}; i <= 100; ++i) {

    std::cout << LCG16() << '\t';  // print pseudo-random num then tab

    if (i % 10 == 0) {

      std::cout << '\n';
    }
  }

  return 0;
}

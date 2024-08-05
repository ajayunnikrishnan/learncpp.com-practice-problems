#include "question_6.h"
#include <iostream>
#include <string_view>

int getUserInput(std::string_view message)
{
  std::cout << message;
  int x {};
  std::cin >> x;

  return x;
}

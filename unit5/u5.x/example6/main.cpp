#include "question6.h"  // for getQuantityPhrase and getApplesPluralized
#include <iostream>
#include <string_view>

int main()
{
  constexpr int maryApples { 3 };
  std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;

  std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

  return 0;
}

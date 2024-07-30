// A modularized example with header files is in the example6 directory
#include <iostream>
#include <string_view>

constexpr std::string_view getQuantityPhrase(int num)
{
  if (num < 0)
    return "negative";
  else if (num == 0)
    return "0";
  else if (num == 1)
    return "a single";
  else if (num == 2)
    return "a couple of";
  else if (num == 3)
    return "a few";

  return "many";
}

constexpr std::string_view getApplesPluralized(int num)
{
  return (num == 1) ? "apple" : "apples";
}

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

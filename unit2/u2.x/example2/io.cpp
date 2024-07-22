#include <iostream>

int readNumber()
{
  std::cout << "Enter a number: ";
  int userInput{};
  std::cin >> userInput;

  return userInput;
}

void writeAnswer(int ans)
{
  std::cout << "The answer is: " << ans << '\n';
}

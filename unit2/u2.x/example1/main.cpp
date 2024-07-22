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

int main()
{
  int num1{ readNumber() };
  int num2{ readNumber() };

  writeAnswer(num1 + num2);

  return 0;
}

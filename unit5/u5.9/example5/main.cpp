// solution to this problem can be found in the next example (example6)

#include <iostream>
#include <string>

int main()
{
  std::cout << "Pick 1 or 2";
  int choice {};
  std::cin >> choice; // captures your input + enter key (\n) the \n gets stored as the character input for the next std::cin call

  std::cout << "Now enter your name: ";
  std::string name;
  std::getline(std::cin, name);  // std::cin uses previous stored input (\n) and does not capture the intended user name

  std::cout << "Hello, " << name << ", you picked " << choice << '\n';

  return 0;
}

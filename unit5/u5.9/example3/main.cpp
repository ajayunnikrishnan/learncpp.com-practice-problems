#include <iostream>
#include <string>

int main()
{
  std::cout << "Enter your name: ";
  std::string name {};
  std::cin >> name;   // wont work as expected since std::cin breaks at the first whitespace

  std::cout << "Enter your fav color: ";
  std::string color {};
  std::cin >> color;

  std::cout << "Your name is " << name << " and your fav color is " << color << ".\n";

  return 0;
}

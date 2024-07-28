#include <iostream>
#include <string>

int main()
{
  std::cout << "Enter full name: ";
  std::string name {};
  std::getline(std::cin >> std::ws, name);

  std::cout << "Enter fav color: ";
  std::string color {};
  std::getline(std::cin >> std::ws, color);

  std::cout << "Your name is " << name << " and your fav color is " << color << ".\n";
}

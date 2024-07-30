#include "question5.h"  // for custom functions
#include <string>
#include <iostream>

// gets user inputted name
std::string getName(int num)
{
  std::cout << "Enter name of person #" << num << ": ";
  std::string name {};
  std::getline(std::cin >> std::ws, name);

  return name;
}

#include "question5.h"  // for custom functions
#include <iostream>
#include <string_view>

// gets age of a person
int getAge(std::string_view name)
{
  std::cout << "Enter age of " << name << ": ";
  int age {};
  std::cin >> age;

  return age;
}

#include "question5.h"  // for custom functions
#include <string_view>
#include <iostream>

// calculate who is older (person 1 or person 2)
void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
  if (age1 > age2)
  {
    std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 <<")." << '\n';
  }
  else if (age1 < age2)
  {
    std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 <<")." << '\n';
  }
  else
  {
    std::cout << name2 << " (age " << age2 << ") is the same age as " << name1 << " (age " << age1 <<")." << '\n';
  }
}

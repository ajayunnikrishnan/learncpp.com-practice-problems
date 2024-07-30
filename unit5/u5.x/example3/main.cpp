// a modularized version of this program (with header files) is in the example4 folder
#include <iostream>
#include <string>
#include <string_view>

// gets user inputted name
std::string getName(int num)
{
  std::cout << "Enter name of person #" << num << ": ";
  std::string name {};
  std::getline(std::cin >> std::ws, name);

  return name;
}

// gets age of a person
int getAge(std::string_view name)
{
  std::cout << "Enter age of " << name << ": ";
  int age {};
  std::cin >> age;

  return age;
}

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

int main()
{
  // get name and age of first person
  constexpr int person1_order_num {1};
  const std::string name1 { getName(person1_order_num) };
  const int age1 = getAge(name1);

  // get name and age of second person
  constexpr int person2_order_num {1};
  const std::string name2 {getName( person2_order_num) };
  const int age2 = getAge(name1);

  // print who's older
  printOlder(name1, age1, name2, age2);

  return 0;
}

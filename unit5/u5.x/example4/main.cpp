#include "question5.h"  // for custom functions

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

#include <iostream>

int generateID()
{
  // a common use for static local variables is id generation
  // each time this function is run, since s_itemID is never destroyed until the program closes it will keep incrementing its value
  static int s_itemID { 0 };
  return ++s_itemID;
} // s_itemID is not destoryed here but not in scope from this point on

int main()
{
  int item1 { generateID() };
  int item2 { generateID() };
  int item3 { generateID() };

  std::cout << item1 << '\n';
  std::cout << item2 << '\n';
  std::cout << item3 << '\n';

  return 0;
}

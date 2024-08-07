#include <iostream>

int main()
{
  int i {};

  //while loop well keep executing the block statement as long as the condition i<= 10 is true
  while (i <= 10)
  {
    std::cout << i << ' ';
    ++i;
  }  // next statement executs when i is 11

  std::cout << "done!\n";

  return 0;
}

#include <iostream>

int main()
{
  // since in the end, conditional statments evaluate to either true or false (1,0),
  // any nonzero evaluation will be true
  if (5)
    std::cout << "Hi\n";
  else
    std::cout << "Bye\n";

  return 0;
}

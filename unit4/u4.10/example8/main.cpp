#include <iostream>

bool isAllowedToTakeFunRide()
{
  std::cout << "How tall are you?\n";
  double height{};
  std::cin >> height;

  return height >= 140.0;
}

int main()
{
  if( isAllowedToTakeFunRide() )
    std::cout << "Have fun!\n";
  else
    std::cout << "Sorry, you're too short.\n";

  return 0;
}

#include <iostream>

int main()
{
  int y { 5 };  // we're declaring y here because it is needed in the outer block

  {
    int x {};
    std::cin >> x;

    // if y were defined here ...
    if (x == 4)
      y = x;
  }  // then it would be destroyed and out-of-scope here

  std::cout << y << '\n';  // and we need to use y here

  return 0;
}

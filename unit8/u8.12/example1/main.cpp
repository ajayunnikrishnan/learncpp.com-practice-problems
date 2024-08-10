#include <cstdlib>  // for std::exit()
#include <iostream>

void cleanup(int statusCode)
{
  std::cout << "Cleanup!!!" << '\n';
  //  halts the program
  std::exit(statusCode);
}

int main()
{
  std::cout << 1 << '\n';
  // can switch to 0 or 1
  cleanup(1);

  std::cout << 2 << '\n';  // statement never executes

  return 0;  // statment never executes
}

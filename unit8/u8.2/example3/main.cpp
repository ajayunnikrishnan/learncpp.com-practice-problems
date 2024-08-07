#include <iostream>

int main()
{
  if (true)
  {
    int x { 5 };
  }  // x destroyed and out of scope here
  else
  {
    int x { 6 };
  }  // x destroyed and out of scope here

  // x does not exist
  std::cout << x << '\n';

  return 0;
}

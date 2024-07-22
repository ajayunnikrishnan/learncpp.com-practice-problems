#include <iostream>
using namespace std;

int main()
{
  int x{};
  x = 123;
  cout << "x is: " << sizeof(x) << " bytes\n";

  return 0;
}

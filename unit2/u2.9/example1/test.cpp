#include <iostream>

using namespace std;  // scope is now under the std library

int cout()
{
  return 4;
}
  
int main()
{
  cout << "hello world\n";  // compile error due to 2 cout's being defined in the std namespace

  return 0;
}

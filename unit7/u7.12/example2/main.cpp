// using directive
#include <iostream>

int main()
{
  using namespace std; // all names from std namespace now accessible without qualification
  cout << "Hello world!\n"; // so no std:: prefix is needed here
  int x {};
  cin >> x;
  cout << x << endl;
  
  return 0;
} // the using-directive ends at the end of the current scope

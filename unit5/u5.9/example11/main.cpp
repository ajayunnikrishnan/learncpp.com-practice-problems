#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Enter your full name: ";
  string name {};
  getline(cin >> ws, name);

  cout << "Enter your age: ";
  int age {};
  cin >> age;

  int letters  {static_cast<int>(ssize(name))};  // use name.length() instead of ssize(name) if using C++17 or lower

  cout << "Your age + length of name is: " << age + letters << '\n';

  return 0;
}

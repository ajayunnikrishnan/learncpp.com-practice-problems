#include <iostream>
#include <string>

int main()
{
  std::string name { "Ajay" };
  std::cout << name << " has a length of " << std::ssize(name) << " character.\n";  // using ssize insted of member function length()

  return 0;
}

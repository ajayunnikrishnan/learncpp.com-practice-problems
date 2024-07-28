#include <iostream>
#include <string>

int main()
{
  std::string name { "Ajay" };
  std::cout << name << " has a length of " << name.length() << " character.\n";  // length does not include null character (character that indicates string termination)

  return 0;
}

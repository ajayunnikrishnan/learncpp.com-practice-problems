#include <iostream>
#include <string>   // for std::string

int main()
{
  std::string name { "Ajay" };
  std::cout << "My name is: "<< name << '\n';

  name = "Joe";
  std::cout << "My name is: "<< name << '\n';

  return 0;
}

// program still runs because the preprocessor does not look for c++ syntax
// so when compiler compiles foo it's an empty function


#include <iostream>

void foo()
{
  #define MY_NAME "Ajay"
}

int main()
{
  std::cout << "My name is: " << MY_NAME << '\n';
}

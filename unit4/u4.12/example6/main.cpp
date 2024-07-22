#include <cstdint>
#include <iostream>

int main()
{
  std::int8_t myInt { 65 }; // initialize myInt to val 65
  std::cout << myInt << '\n'; // prints 'A' but can also print 65 on some systems
  
  return 0;
}

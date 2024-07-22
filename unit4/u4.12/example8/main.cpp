#include <cstdint>
#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  std::int8_t input {};

  std::cin >> input;

  /*
   * Basically, any input we enter ie "35" will be treated like a char (due to int8_t type)
   * this means that the first char '3' will be outputted to the terminal as its integral value (in this case outputted as 51)
   * the remaining 5 goes through the same procces but will automatically be proccessed if there was another character input line
   */

  std::cout << "You Entered: " << static_cast<int>(input) << '\n';

  return 0;
}

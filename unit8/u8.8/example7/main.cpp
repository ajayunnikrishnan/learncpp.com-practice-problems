#include <iostream>

int main()
{
  // initialize the iteration counter

  int count { 1 };
  // execute loop 50 times
  while (count <= 50)
  {
    // add padding if number is single digit
    if (count < 10)
    {
      std::cout << 0;
    }

    // print number and a space
    std::cout << count << ' ';

    // if count is divisible by 10 then print a new line
    if (count % 10 == 0)
    {
      std::cout << '\n';
    }
    // increment count
    ++count;
  }

  return 0;
}

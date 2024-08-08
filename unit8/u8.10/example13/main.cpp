#include <iostream>

void fizzBuzz(int x)
{
  // making fizz, buzz, and pop numbers adjustable
  int fizzNum { 3 };
  int buzzNum { 5 };
  int popNum { 7 };

  // repeat 1 to x times
  for (int i {1}; i <= x; ++i)
  {
    bool printed { false };

    // fizz
    if (i % fizzNum == 0)
    {
    std::cout << "fizz";
    printed = true;
    }

    // buzz
    if (i % buzzNum == 0)
    {
    std::cout << "buzz";
    printed = true;
    }

    // pop
    if (i % popNum == 0)
    {
    std::cout << "pop";
    printed = true;
    }

    // print number
    if (!printed)
    {
       std:: cout << i;
    }

    // new row
    std::cout << '\n';
  }
}

int main()
{
  fizzBuzz(150);

  return 0;
}

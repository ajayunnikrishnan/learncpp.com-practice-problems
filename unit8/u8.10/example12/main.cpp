#include <iostream>

void fizzBuzz(int x)
{
  // making fizz and buzz numbers adjustable
  int fizzNum { 3 };
  int buzzNum { 5 };

  for (int i {1}; i <= x; ++i)
  {
    // order of the if-else statments matters (ex, if the first if statment evaluates true the program executes its statmentss then moves past the entire if else block)
    // number is divisible by fizzNum and buzzNum
    if ( (i % fizzNum == 0) && (i % buzzNum == 0) )
    {
      std::cout << "fizzbuzz" << '\n';
    }
    // number is divisible by fizzNum
    else if ( (i % fizzNum == 0) )
    {
      std::cout << "fizz" << '\n';
    }
    // number is divisible by buzzNum
    else if ( (i % buzzNum == 0) )
    {
      std::cout << "buzz" << '\n';
    }
    // number is neither divisible by fizzNum or buzzNum
    else
    {
      std::cout << i << '\n';
    }
  }
}

int main()
{
  fizzBuzz(15);

  return 0;
}

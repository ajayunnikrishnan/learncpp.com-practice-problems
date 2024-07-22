#include <iostream>

// void value;  // wont work since variables cant be defined with incomplete type void

// Type void does not return a value
void writeVal(int x)
{
  std::cout << "The value of x is: " << x << '\n';
}

// Type int returns an integer
int main()
{
  writeVal(5);
  return 0;
}

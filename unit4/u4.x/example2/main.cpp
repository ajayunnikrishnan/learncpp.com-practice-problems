// another example of this prrogram is in example3 using header files


#include <iostream>

// retrun a user inputed double to the caller
double getDouble()
{
  std::cout << "Enter a double value: ";
  double x {};
  std::cin >> x;

  return x;
}

// retrun a user inputed operation to the caller
char getOperation()
{
  std::cout << "Enter +,-,*,/: ";
  char x {};
  std::cin >> x;

  return x;
}


void calculate(double x, double y, char operation)
{
  if (operation == '+')
  {
    std::cout << x << " + " << y << " is " << x + y << '\n';
  }
  else if (operation == '-')
  {
    std::cout << x << " - " << y << " is " << x - y << '\n';
  }
  else if (operation == '*')
  {
    std::cout << x << " * " << y << " is " << x * y << '\n';
  }
  else if (operation == '/')
  {
    std::cout << x << " / " << y << " is " << x / y << '\n';
  }
  else
  {
    return;
  }

}

int main()
{
  double x {getDouble()};
  double y {getDouble()};
  char operation {getOperation()};

  calculate(x,y,operation);

  return 0;
}

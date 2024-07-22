#include <iostream>

// retrun a user inputed value to the caller
double getUserValue()
{
  std::cout << "Enter a double value: ";
  double x {};
  std::cin >> x;

  return x;
}

// calculate function is too long, in example2 this function is broken into 2 subfunctions
void calculate(double x, double y)
{
  // get user op
  std::cout << "Enter +,-,*,/: ";
  char op {};
  std::cin >> op;

  if (op == '+')
  {
    std::cout << x << " + " << y << " is " << x + y << '\n';
  }
  else if (op == '-')
  {
    std::cout << x << " - " << y << " is " << x - y << '\n';
  }
  else if (op == '*')
  {
    std::cout << x << " * " << y << " is " << x * y << '\n';
  }
  else if (op == '/')
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
  double x {getUserValue()};
  double y {getUserValue()};

  calculate(x,y);

  return 0;
}

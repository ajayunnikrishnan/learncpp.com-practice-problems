#include <limits>
#include <iostream>

void clearInputStream()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


// returns true if extraction failed, false otherwise
bool didExtractionFail()
{
    // Check for failed extraction
    if (!std::cin) // If the previous extraction failed
    {
        if (std::cin.eof()) // If the stream was closed
        {
            exit(0); // Shut down the program now
        }

        // Let's handle the failure
        std::cin.clear(); // Put us back in 'normal' operation mode
        clearInputStream();     // And remove the bad input

        return true;
    }

    return false;
}

double getDouble()
{
  while (true)
  {
    std::cout << "Enter a number: ";
    double x {};
    std::cin >> x;

    // if input extraction failed
      
    if (didExtractionFail())
    {
      std::cout << "Please enter a valid number\n";
      continue;
    }

    // clear input stream if user enter any more characters
    clearInputStream();
    return x;
  }
}

char getOperation()
{
  while (true)
  {
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char operation{};
    std::cin >> operation;

    if (didExtractionFail())
    {
      std::cout << "Please enter a valid operation/n";
      continue;
    }


    switch (operation)
    {
    case '+':
    case '-':
    case '*':
    case '/':
    {
      clearInputStream();
      return operation;

    }
    default:
    {
      std::cout << "Please enter a valid operation/n";
      clearInputStream();
      continue;
    }
    }
  }
}

void printResult(double x, char operation, double y)
{

  // do calculation for respective operation
  switch (operation)
  {
  case '+':
    std::cout << x << ' ' << operation << ' ' << y << " is " << x + y << '\n';
    return;
  case '-':
    std::cout << x << ' ' << operation << ' ' << y << " is " << x - y << '\n';
    return;
  case '*':
    std::cout << x << ' ' << operation << ' ' << y << " is " << x * y << '\n';
    return;
  case '/':
    // dividing by 0 is undefined
    if (y == 0)
    {
      std::cout << "Undefined\n";
      break;
    }
    std::cout << x << ' ' << operation << ' ' << y << " is " << x / y << '\n';
    return;
  }
}


int main()
{
  double x{ getDouble() };
  char operation { getOperation() };
  double y{ getDouble() };

  printResult(x, operation, y);

}

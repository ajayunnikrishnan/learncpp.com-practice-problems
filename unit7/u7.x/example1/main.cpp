#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


  // we need a block statment so that both statment can execute if the if statment evaluates to true
	if (num < 0)
  {
    std::cout << "Negative number entered.  Making positive.\n";
    num = -num;
  }

  // added new line for readability
	std::cout << "You entered: " << num << '\n';

	return 0;
}

#include <iostream>

int add(int x, int y)
{
  // inputted x and y args seem to be subtracted by one
  std::cerr << "x=" << x << "\ny=" << y << '\n';
	return x + y;
}

void printResult(int z)
{
  std::cerr << "z=" << z << '\n';
	std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
  // problem found! x is being subtracted by one, remove -- to fix
	return --x;
}

int main()
{
	int x{ getUserInput() };
  std::cerr << "x=" << x << '\n';
	int y{ getUserInput() };
  std::cerr << "y=" << y << '\n';

	int z { add(x, y) };

	printResult(z);

	return 0;
}

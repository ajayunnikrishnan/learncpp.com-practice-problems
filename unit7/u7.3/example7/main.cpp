#include <iostream>

int main()
{
  // Get smaller number
  std::cout << "Enter an integer: ";
  int smaller {};
  std::cin >> smaller;

  // Get bigger number
  std::cout << "Enter a bigger integer: ";
  int bigger {};
  std::cin >> bigger;

  // Using nested block to swap numbers if smaller > bigger
  if (smaller > bigger)
  {
    std::cout << "Swapping the values\n";

    int swp {bigger};
    bigger = smaller;
    smaller = swp;
  }  // swp is destroyed here

  std::cout << "The smaller value is: " << smaller << '\n';
  std::cout << "The bigger value is: " << bigger << '\n';

  return 0;
} // smaller and bigger are destroyed here

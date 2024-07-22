// version using header files is in example6 folder
#include <iostream>

double getHeight()
{
  std::cout << "Enter the height of the tower in meters: ";
  double height{};
  std::cin >> height;

  return height;
}

double calculateHeight(double towerHeight, int time)
{
  double gravity = 9.8;
  double heightFallen = 9.8 * time * time / 2;
  double currentHeight = towerHeight - heightFallen;

  return currentHeight;
}

void printHeight(double currentHeight, int time)
{
  if (currentHeight > 0)
    std::cout << "At " << time << " seconds, the ball is at height: " << currentHeight << " meters\n";

  else
    std::cout << "At " << time << " seconds, the ball hit the ground.\n";
}

void calculateAndPrintHeight(double towerHeight, int time)
{
  double currentHeight = calculateHeight(towerHeight, time);
  printHeight(currentHeight, time);
}

int main()
{
  double height {getHeight()};

  calculateAndPrintHeight(height, 0);
  calculateAndPrintHeight(height, 1);
  calculateAndPrintHeight(height, 2);
  calculateAndPrintHeight(height, 3);
  calculateAndPrintHeight(height, 4);
  calculateAndPrintHeight(height, 5);

  return 0;
}

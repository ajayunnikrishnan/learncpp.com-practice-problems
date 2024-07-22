// more compartmentalized version in example5 folder
#include <iostream>

double getHeight()
{
  std::cout << "Enter the height of the tower in meters: ";
  double height{};
  std::cin >> height;

  return height;
}

void calculateHeight(double towerHeight, int time)
{
  double currentHeight = towerHeight - 9.8 * time * time / 2;

  if (currentHeight > 0)
    std::cout << "At " << time << " seconds, the ball is at height: " << currentHeight << " meters\n";

  else if (currentHeight <= 0)
    std::cout << "At " << time << " seconds, the ball hit the ground.\n";
}

int main()
{
  double height {getHeight()};

  calculateHeight(height, 0);
  calculateHeight(height, 1);
  calculateHeight(height, 2);
  calculateHeight(height, 3);
  calculateHeight(height, 4);
  calculateHeight(height, 5);

  return 0;
}

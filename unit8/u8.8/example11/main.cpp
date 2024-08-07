/*
*

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1


*/


#include <iostream>

int main()
{
  // There are 5 loops we can loop 1-5
  int y { 1 };

  while (y <= 5)
  {
    // row elements appear in descending order, so start from 5 and loop to 1
    int x { 5 };
    while (x >= 1)
    {

      // print row position if the row position is <= to the row number
      if (x <= y)
      {
      std::cout << x << ' ';
      }
      else
      {
        std::cout << ' ' << ' ';
      }
      --x;
    }
    // row has been printed, move to next row
    std::cout << '\n';
    ++y;
  }

  return 0;
}

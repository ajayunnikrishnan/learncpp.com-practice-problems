#include <iostream>

int main()
{
  for (int count{ 0 }; count < 10; ++count)
  {
    if ((count % 4) == 0)
      // skip to next iteration
      continue;
    
    std::cout << count << '\n';
  }
  return 0;
}

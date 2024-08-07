#include <iostream>

int main()
{
  constexpr double gravity { 9.8 };

  // expression evaluated to true meaning entire if statement gets replaced with "std::cout << "Gravity is normal" << '\n';"
  if constexpr (gravity == 9.8) // now using consexpr if
    std::cout << "Gravity is normal" << '\n';
  else
    std::cout << "Gravity is not normal" <<'\n';

  return 0;
}

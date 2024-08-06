#include <iostream>

int main()
{
  int apples { 5 }; // apples in scope from this point on

  {
    // apples refers to outer block apples here
    std::cout << apples << '\n';  // print val of outer block apples here

    // defines apples inside the dested block (a different one)
    int apples { 0 };

    // apples now refers to the nested block one
    // the outer block apples is temporarily hidden

    apples = 10;

    std::cout << apples << '\n';
  } // nested block apples destroyed here 

  // outside block apples printed here
  std::cout << apples << '\n';
  return 0;
} // outside block appples destroyed here

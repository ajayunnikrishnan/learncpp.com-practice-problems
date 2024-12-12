#include <iostream>

int main()
{
  // cannot have references to references

  int var{};

  int& ref1{var};
  int& ref2{ref1};  // ref1 refers to var, so ref2 refers to var NOT ref1


  std::cout << var << ' ' << ref1 << ' ' << ref2 << '\n';

  return 0;
}

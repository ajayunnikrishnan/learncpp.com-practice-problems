#include <iostream>

int main()
{
  // added suffixes to the end of 5's default literal type
  // to change to a different desired type
  int typeInt {5};
  int typeLong {5L};
  int typeUnsignedInt {5u};

  std::cout << typeInt << " has length " << sizeof(typeInt) << " bytes\n";
  std::cout << typeLong << " has length " << sizeof(typeLong) << " bytes\n";
  std::cout << typeUnsignedInt << " has length " << sizeof(typeUnsignedInt) << " bytes\n";

  return 0;
}

#include <iostream>

void incrementAndPrint()
{
  static int s_value { 1 };  // changed duration from automatic to static, meaning variable is initialized at program startup and destoryed when program ends
  ++s_value;  // increment value
  std::cout << s_value << '\n';
}  // s_value is not destroyed here, but becomes inaccesable because it is out of scope

int main()
{
  incrementAndPrint();
  incrementAndPrint();
  incrementAndPrint();

  return 0;
}

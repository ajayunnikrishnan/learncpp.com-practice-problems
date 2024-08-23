#include <iostream>
#include <string_view>

void print(std::string_view s)
{
  std::cout << s << '\n';
}

void print(char c=' ')
{
  std::cout << c << '\n';
}

int main()
{
  print("hello!!");
  print('x');
  print();

  return 0;
}

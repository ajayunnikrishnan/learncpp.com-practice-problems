#include <iostream>
#include <string_view>

int main()
{
  std::string_view word {"Peach"};

  // remove 1 letter from start
  word.remove_prefix(1);
  std::cout << word << '\n';

  // remove 2 letters from end
  word.remove_suffix(2);
  std::cout << word << '\n';

  // reset word
  word = "Peach";
  std::cout << word << '\n';

  return 0;
}

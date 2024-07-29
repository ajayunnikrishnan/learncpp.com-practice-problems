#include <iostream>
#include <string>
#include <string_view>

using namespace std;

int main()
{
  string_view s1 {"C-style string literal to std::string_view"};
  cout << s1 << '\n';

  string_view s2 {"std::string to std::string_view"};
  string_view s3(s2);
  cout << s3 << '\n';

  string_view s4 {"std::string"};
  cout << s4 << '\n';

  return 0;
}

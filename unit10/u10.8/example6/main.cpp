int main()
{
  auto a {"Hello World"};  // a will be NOT of type std::string but will be of type char* (c-style string)
  
  using namespace std::literals;

  auto b {"Hello World"s};  // b is deduced to type std::string
  auto b {"Hello World"sv};  // b is deduced to type std::string_view

  return 0;
}

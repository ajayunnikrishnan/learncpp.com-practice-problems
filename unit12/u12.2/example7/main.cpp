int return5()
{
  return 5;
}

int main()
{
  int x {5};  // x is a modifiable lvalue
  const double y {34.3};  // y is a non-modifiable lvalue

  int z {return5()};  // return5() is a rvalue expression
  int w { x + 1 };  // x + 1 is an rvalue expression
  int b { static_cast<short>(x) };  // static_cast<double>(a) is an rvalue expression

  return 0;
}

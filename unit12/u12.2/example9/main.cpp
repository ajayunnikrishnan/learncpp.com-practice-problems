int foo()
{
  return 5;
}

int main()
{
  int x;
  &x;  // compiles since x is an lvalue
  &5;  // error: 5 is not an lvalue but an rvalue
  &foo();

  return 0;
}

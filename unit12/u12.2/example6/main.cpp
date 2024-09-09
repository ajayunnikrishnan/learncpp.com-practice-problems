int main()
{
  int x { 4 };
  const int a { 34 };

  int y { x };  // x is a modifiable lvalue
  int z { a };  // a is a non modifiable lvalue

  return 0;
}

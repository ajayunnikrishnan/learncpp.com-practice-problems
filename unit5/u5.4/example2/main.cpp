// since variable y does not require a const expresion initializer the compiler
// can choose whether or not to evaluate 3 + 4 at compile time
// although not required to do so, modern compilers will usually compile the constant expression
// at compile time

int main()
{
  const int x { 5 + 5 };  // expresion 5 + 5 must be evaluated at compile time
  int y { 5 + 5 };  // may be evaluated at compile time or runtime
  
  return 0;
}

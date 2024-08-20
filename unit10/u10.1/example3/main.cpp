// implicit type conversion

void doSomething(long l)
{
  ;
}

int main()
{
  if (5) // int value 5 implicitly converted to type bool
  {
    doSomething(3); // int value 3 implicitly converted to type long
  }

  return 0;
}

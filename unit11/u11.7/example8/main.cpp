// function templates can have non-templated parameters
// we dont need to provide parameter names since they aren't used
template <typename T>
int someFcn(T , double)
{
  return 5;
}

int main()
{
  someFcn(true, 4.5);
  someFcn(1, 4.5);
  someFcn(1.2, 4.5);
  someFcn('a', 4.5);

  return 0;
}

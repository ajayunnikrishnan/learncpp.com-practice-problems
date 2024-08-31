// function template definition is provided but never called within the file!
// which means the respective instantiated functions for addOne<int> and addOne<double> are not created!

template <typename T>
T addOne(T x)
{
  return x + 1;
}

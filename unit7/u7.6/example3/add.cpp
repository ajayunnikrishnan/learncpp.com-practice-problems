// add function has internal linkage (which means it cannot be accessed outside of this file)
// attempts to access add via a forward declaration in another file will fail
[[maybe_unused]] static int add(int x, int y)
{
  return x + y;
}

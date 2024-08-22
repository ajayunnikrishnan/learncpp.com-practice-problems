int main()
{
  auto a {1.5f};  // compile will deduce that a will be of type float, since 1.5f is a float literal
  auto b {5u};    // compile will deduce that a will be of type unsigned int, since 5u is an unsigned int literal

  return 0;
}

int main()
{
  int a { 5 }; // 1a -> no conversion
  int b { 'a' }; // 1b -> integral promotion
  int c { 5.4 }; // 1c -> wont compile due to narrowing conversion
  int d { true }; // 1d -> integral promotion
  int e { static_cast<int>(5.4) }; // 1e -> cast from double to int (narrowing conversion explicitly allowed)

  double f { 5.0f }; // 1f -> floating point promotion
  double g { 5 }; // 1g -> numeric conversion

  // Extra credit section
  long h { 5 }; // 1h -> numeric conversion

  float i { f }; // 1i (uses previously defined variable f) -> wont compile narrowing conversion from double to float
  float j { 5.0 }; // 1j -> narrowing conversion allowed from double to float since 5.0 falls under float's range (numeric conversion)

  return 0;
}

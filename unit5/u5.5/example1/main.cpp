// Best practice:
// use const when dealing with a constant variable who's initializer (inside) is not a constant expression (runtime constant)
// use constexpr when dealing with a constant variable who's initializer is a constant expression (compile-time constant)

#include <iostream>

int five()
{
  return 5;
}

int main()
{
  constexpr double gravity { 9.8 };   // ok: 9.8 is a constant expression
  constexpr int sum { 4 + 5 };  // ok: 4 + 5 is a constant expression

  std::cout << "Enter your age: ";
  int age{};
  std::cin >> age;

  /*constexpr int myAge {age};  // compile error: age is not a constant expression */
  /*constexpr int f { five() }; // compile error: return value of five() is not a constant expression (make five()'s return type constexpr to make a constant expression)*/

  return 0;
}

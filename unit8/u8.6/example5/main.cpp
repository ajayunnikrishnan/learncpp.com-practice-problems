int main()
{
  switch (1)
  {
  case 1:
  { // note addition of explicit block here
    int x{ 4 }; // okay, variables can be initialized inside a block inside a case
    std::cout << x;
    break;
  }

  default:
    std::cout << "default case\n";
    break;
  }

  return 0;
}

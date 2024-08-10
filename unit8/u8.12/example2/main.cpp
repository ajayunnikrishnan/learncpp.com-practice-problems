#include <iostream>
#include <cstdlib>

// functions called by atexit() must have no function parameters
void cleanup()
{
  // preform some cleanup here
  std::cout << "Cleanup!!!" << '\n';
}

int main()
{
  std::cout << 1 << '\n';
  // note: we use cleanup rather than cleanup() since we're not making a function call to cleanup() right now
  std::atexit(cleanup);  // cleanup() will be called when std::exit() is called

  // program halt
  std::exit(0);

  // both statments are never run since program exits early
  std::cout << 2 << '\n';
  return 0;
}

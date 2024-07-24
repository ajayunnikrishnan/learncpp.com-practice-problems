#ifndef PI_H
#define PI_H

// inline function pastes function body everywhere pi() is called
// not violating ODR (one definition rule)
inline double pi()
{
  return 3.14159;
}

#endif

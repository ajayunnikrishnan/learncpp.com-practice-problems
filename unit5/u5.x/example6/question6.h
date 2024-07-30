#ifndef QUESTION_6
#define QUESTION_6

#include <string_view>

// constexpr functions are implicitly inline
constexpr std::string_view getQuantityPhrase(int num)
{
  if (num < 0)
    return "negative";
  else if (num == 0)
    return "0";
  else if (num == 1)
    return "a single";
  else if (num == 2)
    return "a couple of";
  else if (num == 3)
    return "a few";

  return "many";
}

// constexpr functions are implicitly inline
constexpr std::string_view getApplesPluralized(int num)
{
  return (num == 1) ? "apple" : "apples";
}

#endif

#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
  [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
  [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
  [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
  [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
  [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

  std::uint8_t myArticleFlags{ option_favorited };

  // Place all lines of code for the following quiz here

  // set option viewed
  myArticleFlags |= option_viewed;
  std::cout << std::bitset<8>{ myArticleFlags } << '\n';

  // check if article is deleted
  std::cout << "Article deleted: " << (static_cast<bool>(myArticleFlags & option_deleted) ? "yes\n" : "no\n");

  // reset article as favorite
  myArticleFlags &= static_cast<std::uint8_t>(~option_favorited);  // explicitly converted back to type uint8_t as option favourited can be promoted to int causing accuracy errors
  std::cout << std::bitset<8>{ myArticleFlags } << '\n';

  return 0;
}

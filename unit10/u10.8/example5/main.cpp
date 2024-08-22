int main()
{
    const int x { 5 };  // x has type const int (compile-time const)
    auto y { x };       // y will be type int (const is dropped)

    constexpr auto z { x }; // z will be type constexpr int (constexpr is reapplied)

    return 0;
}

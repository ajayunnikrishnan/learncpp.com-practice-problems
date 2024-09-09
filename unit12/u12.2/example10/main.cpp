int main()
{
    int x{ 1 };
    int y{ 2 };

    // y undergoes lvalue to rvalue conversion
    x = y; // y is a modifiable lvalue, not an rvalue, but this is legal

    return 0;
}

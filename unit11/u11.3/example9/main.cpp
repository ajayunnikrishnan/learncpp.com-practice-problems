void foo(unsigned int)
{
}

void foo(float)
{
}

int main()
{
    foo(0); // int can be numerically converted to unsigned int or to float
    foo(3.14159); // double can be numerically converted to unsigned int or to float

    return 0;
}

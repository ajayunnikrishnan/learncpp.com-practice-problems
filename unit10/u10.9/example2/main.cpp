// auto return type functions CANNOT return 2 different types like this:
auto someFcn(bool b)
{
    if (b)
        return 5; // return type int
    else
        return 6.7; // return type double
}

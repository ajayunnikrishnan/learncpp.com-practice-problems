int main()
{
	const int x{ 5 };
	int& ref{ static_cast<int&>(x) }; // invalid: will produce compilation error
	ref = 6;

	return 0;
}

// type aliases cannot be used to differentiate from functions that use the aliased type
typedef int Height;  // alias for int
using Age = int;     // alias for int

void print(int value);
void print(Height value);  // not differentiated from print(int)
void print(Age value);     // not differentiated from print(int)

#include <stdio.h>

long foo(long x, long y)
{
	return x + y;
}

int main()
{
	long x = 5;
	long y = 4;

	long res = foo(x, y);
	printf("%ld + %ld = %ld\n", x, y, res);

	return 0;
}

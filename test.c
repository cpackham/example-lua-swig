#include "test.h"

int func1(int a, int b, STC *out)
{
	out->foo = a;
	out->bar = b;

	return 0;
}

int func2(int a, int b, int *out)
{
	*out = a + b;
	return 0;
}

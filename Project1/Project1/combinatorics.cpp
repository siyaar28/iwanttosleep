#include "combinatorics.h"

int fac(int n)
{
	assert(n >= 0);
	int fac = 1;
	for (int i = 2; i <= n; ++i)
	{
		fac *= i;
	}
	return fac;
}

int facR(int n)
{
	assert(n >= 0);
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * facR(n - 1);
	}
}
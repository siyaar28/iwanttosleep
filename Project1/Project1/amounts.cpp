#include "stuff.h"

void amount3()
{
	int n;
	cin >> n;
	int amount = 0;
	int number;
	for (int i = 0; i < n; ++i)
	{
		cin >> number;
		if (number % 3 == 0)
		{
			++amount;
		}
	}
	cout << amount;
}
#include "stuff.h"

void max()
{
	int n;
	cin >> n;
	int max;
	int number;
	cin >> number;
	max = number;
	for (int i = 2; i <= n; ++i)
	{
		cin >> number;
		if (number > max)
		{
			max = number;
		}
	}
	cout << max;
}

void max3()
{
	int n;
	cin >> n;
	int max;
	int number;
	max = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> number;
		if (number > max && number % 3 == 0)
		{
			max = number;
		}
	}
	cout << max;
}

void max0()
{
	int number;
	int amount = 0;
	int max = 0;
	cin >> number;
	while (number != 0)
	{
		++amount;
		if (number > max)
		{
			max = number;
		}
		cin >> number;
	}
	cout << max << " " << amount;
}

void smax()
{
	int max1, max2, number;
	cin >> max1 >> max2;
	if (max1 < max2)
	{
		int temp = max1;
		max1 = max2;
		max2 = temp;
	}
	cin >> number;
	while (number != 0)
	{
		if (number > max1)
		{
			max2 = max1;
			max1 = number;
		}
		else
		{
			if (number > max2)
			{
				max2 = number;
			}
		}
		cin >> number;
	}
	cout << max1 << " " << max2;
}
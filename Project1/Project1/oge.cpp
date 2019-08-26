#include "oge.h"

void oge20()
{
	int max5, number, n;
	cin >> n;
	max5 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number > max5 && number % 5 == 0)
		{
			max5 = number;
		}
	}
	cout << max5;
}
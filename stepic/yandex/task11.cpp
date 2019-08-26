#include "integerNumbers.h"

void task11()
{
	int h, a, b;
	cin >> h >> a >> b;
	cout << (h - b + (a - b) - 1) / (a - b);
}
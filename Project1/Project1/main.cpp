#include <iostream>

using namespace std;

int myFunc(int y)
{
	return y * y - 5 * y + 4;
}

// проверяет простое ли число
bool prime(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

// возвращает количество простых чисел до number включительно
int primeCount(int number)
{
	int count = 0;
	for (int i = 1; i <= number; ++i)
	{
		if (prime(i))
		{
			++count;
		}
	}
	return count;
}

int main()
{
	/*
	int x = 10;
	int y = 5;
	x += 5;
	x *= 8;
	string s = "sdsds";
	bool log = (5 > 6) || (7 > 8);
	cout << myFunc(1) << endl;
	if (x > 100)
	{
		cout << "true branch";
	}
	else
	{
		cout << "lie bracnh";
	}
	for (int i = 1; i <= 1024; i *= 2)
	{
		cout << i << " ";
	}
	*/
	// cout << prime(1) << " " << prime(5) << " " << prime(10);
	for (int i = 0; i < 10; i++)
	{
		int k = 10;
		cout << k;
	}
	cout << primeCount(10);
	return 0;
}
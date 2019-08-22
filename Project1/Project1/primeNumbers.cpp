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
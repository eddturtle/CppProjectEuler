#include <stdio.h>

bool IsPrime(int num);

int main ()
{
	int min = 2; // Doesn't Include 1 as Prime
	//int max = 10; // Answer: 17
	int max = 2000000; // Answer: 142913828922

	unsigned long long total = 0;

	for (int i = min; i <= max; i++)
	{
		if ( IsPrime(i) )
		{
			printf("%d is Prime\n", i);
			total += i;
		}
	}

	printf("Sum of Primes upto %d: %lld\n", max, total);

	return 0;
}

bool IsPrime(int num)
{
	if (num == 1 || num == 2)
	{
		return true;
	}

	if (num % 2 == 0)
	{
		return false;
	}

	bool prime = true;
	for (int i = 3; (i * i) <= num; i += 2)
	{
		if (num % i == 0)
		{
			prime = false;
		}
	}
	return prime;
}
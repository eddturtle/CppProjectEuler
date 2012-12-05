#include <stdio.h>

int min = 1;
int max = 20;

bool IsDivisible(int num);

int main()
{
	int i = 2;

	while (!IsDivisible(i))
	{
		i++;
	}

	printf("Lowest Number Divisible by First %d Numbers: %d\n", max, i);
	
	return 0;
}

bool IsDivisible(int num)
{
	bool isDivisible = true;
	for (int i = min; i <= max; i++)
	{
		if (num % i != 0)
		{
			isDivisible = false;
		}
	}
	return isDivisible;
}
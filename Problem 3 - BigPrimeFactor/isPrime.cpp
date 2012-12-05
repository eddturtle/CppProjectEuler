#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool IsPrime(int);

int main()
{
	unsigned long long test = 6;
	bool isPrime = true;
	
	if (test == 1) isPrime = false;
		
	for (int i = 3; i <= sqrt(test); i+=2)
	{
		if (test % i == 0)
		{
			 isPrime = false;
		}
	}
	
	printf("prime=%d\n", isPrime);
	
	return 0;
}

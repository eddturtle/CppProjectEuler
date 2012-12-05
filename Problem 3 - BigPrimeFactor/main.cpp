/*

Euler Project

Problem 3
02 November 2001

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/


#include <stdio.h>
#include <math.h>

bool IsPrime(int);

int main()
{
	//unsigned long long limit = 13195;
	unsigned long long limit = 600851475143;
	
	for (unsigned long long i = (limit - 1); i > 2; i--)
	{
		if (limit % i == 0 && IsPrime(i))
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}





bool IsPrime(int test)
{
	if (test == 1) return false;
	if (test % 2 == 0) return true;
		
	for (int i = 3; i <= sqrt(test); i+=2)
	{
		if (test % i == 0)
		{
			return false;
		}
	}
	
	return true;
}






#include <stdio.h>


int main()
{
	int limit = 1000;
	int total = 0;
	
	for (int i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	
	printf("Sum: %d", total);
	
	return 0;
}

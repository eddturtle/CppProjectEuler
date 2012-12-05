#include <stdio.h>
#include "stack.h"

int main()
{	
	
	unsigned long limit = 4000000;
	
	unsigned long oneBack = 2;
	unsigned long twoBack = 1;
	
	unsigned long thisNo = 0;
	
	unsigned long total = 2;
	
	while (thisNo < limit)
	{
		thisNo = oneBack + twoBack;
		
		printf("num: %d", thisNo);
		if ( thisNo % 2 == 0 )
		{
			total += thisNo;
			printf(" is even");
		}
		printf("\n");
		
		twoBack = oneBack;
		oneBack = thisNo;
	}
	
	printf("total even numbers: %d\n", total);
		
}

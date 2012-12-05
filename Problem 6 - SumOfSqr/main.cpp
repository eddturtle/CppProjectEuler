#include <stdio.h>

int main()
{
	int limit = 100;
	
	int sqrThenAdd = 0;
	int addThenSqr = 0;
	
	int final;
	
	for (int i = 1; i <= limit; i++)
	{
		sqrThenAdd += i * i;
		addThenSqr += i;
	}
	
	addThenSqr *= addThenSqr;
	
	printf("SqrThenAdd: %d\nAddThenSqr: %d\n", sqrThenAdd, addThenSqr);

	final = addThenSqr - sqrThenAdd;
	
	printf("Answer: %d\n", final);

	return 0;
}

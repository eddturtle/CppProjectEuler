#include <stdio.h>

int main()
{
	// Init
	int limit = 105000;
	//int limit = 100;
	int* main = new int [limit];
	int total = 0;
	int max = 0;
	
	// Setup
	for (int s = 0; s < limit; s++)
	{
		int t = s + 1;
		if (t % 2 != 0 && t != 1 || t == 2)
		{
			main[s] = t;
		}
		else
		{
			main[s] = 0;
		}
	}
	
	// Calculate
	for (int i = 0; i < limit; i++) // Step Through Array
	{
		int val = main[i];
		if (val != 0)
		{
			for (int x = 2; x < (val-1); x++)
			{
				if (val % x == 0)
				{
					main[i] = 0;
				}
			}
		}
	}
	
	// Print
	FILE *file; 
	file = fopen("file.txt","w+");
	
	for (int s = 0; s < limit; s++)
	{
		if (main[s] != 0)
		{
			fprintf(file,"%d\n",main[s]); /*writes*/ 
			total++;
		}
	}
	fclose(file);
	/* */
	
	printf("Total Primes: %d\n (=%d)", total, max);

	delete main;
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int result, length, bufferSize = 6, highest = 0;
	char *buffer;
	bool palindrome;

	int max = 999;
	int min = 100;

	int size = ((max - min) + 2) * 2;

	unsigned int *numbers = new unsigned int[size];
	int arrayPosition = 0;

	for (int i = min; i <= max; i++)
	{
		for (int j = min; j <= max; j++)
		{
			buffer = new char[bufferSize];
			palindrome = true;

			result = i * j;

			sprintf(buffer, "%d", result);
			length = strlen(buffer);

			for (int i = 0; i < length / 2; i++)
			{
				if (buffer[i] != buffer[(length - 1) - i])
				{
					palindrome = false;
				}
			}

			if (palindrome == true)
			{
				printf("Result: %d\n", result);

				if (result > highest)
				{
					highest = result;
				}
			}

			delete [] buffer;
		}
	}

	printf("\n\n---------------------------\n\n");
	printf("Highest: %d\n", highest);

	return 0;
}
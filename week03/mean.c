#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE_1	100
#define ARRAY_SIZE_2	500

void printArray(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if (i % 20 == 0)
		{
			printf("\n");
		}

		printf("%2d", a[i]);
	}
}

int mean(int a[], int size)
{
	int total = 0;
	for(int i = 0; i < size; i++)
	{
		total += a[i];
	}

	return total / size;
}

int main(int argc, char const *argv[])
{
	int responses1[ARRAY_SIZE_1];

	srand(time(0));

	for(int i = 0; i < ARRAY_SIZE_1; i++)
	{
		responses1[i] = 1 + rand() % 9;
	}
	printf("The random responses are:");
	printArray(responses1, ARRAY_SIZE_1);
	printf("\n\nMean is %i\n", mean(responses1, ARRAY_SIZE_1));

	printf("\n\n\n");

	int responses2[ARRAY_SIZE_2];

	srand(time(0));

	for(int i = 0; i < ARRAY_SIZE_2; i++)
	{
		responses2[i] = 1 + rand() % 9;
	}
	printf("The random responses are:");
	printArray(responses2, ARRAY_SIZE_2);
	printf("\n\nMean is %i\n", mean(responses2, ARRAY_SIZE_2));

	return 0;
}
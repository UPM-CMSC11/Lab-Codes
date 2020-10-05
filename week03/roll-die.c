// Roll a six-sided die 6000 times
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_SIZE 7

int main(int argc, char const *argv[])
{
	int frequency[ARRAY_SIZE] = {0, 0, 0, 0, 0, 0, 0};

	srand(time(0));

	for(int i = 0; i < 6000; i++)
	{
		++frequency[1 + rand() % 6];
	}

	printf("%s %13s\n", "Face", "Frequency");
	for(int i = 1; i < ARRAY_SIZE; i++)
	{
		printf("%4i %13i\n", i, frequency[i]);
	}

	return 0;
}
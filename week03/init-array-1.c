#include <stdio.h>

#define ARRAY_SIZE 10

int main(int argc, char const *argv[])
{
	int n[ARRAY_SIZE];

	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		n[i] = 2 + 2 * i;
	}

	printf("%s %13s\n", "Element", "Values");

	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%7i %13i\n", i, n[i]);
	}

	return 0;
}
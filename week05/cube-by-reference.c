/********************************************************
 * Cube a variable using call-by-reference
 * with pointer argument
 *******************************************************/
#include <stdio.h>

void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}

int main(int argc, char const *argv[])
{
	int number = 6;

	printf("The original value of number is %i\n", number);
	cubeByReference(&number);
	printf("The new value of number is %i\n", number);
	return 0;
}
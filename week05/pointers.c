/*************************************************
 * Using the * and & operators
 *************************************************/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;		// a is an int
	int *aPtr;	// aPtr is a pointer to an integer

	a = 7;
	aPtr = &a;

	printf("The address of a is %p"
			"\nThe value of aPtr is %p", &a, aPtr);

	printf("\n\nThe value of a is %i"
			"\nThe value of *aPtr is %i", a, *aPtr);

	printf("\n\nShowing that * and & are inverse of "
			"each other.\n&*aPtr = %p"
			"\n*&aPtr = %p\n", &*aPtr, *&aPtr);

	return 0;
}
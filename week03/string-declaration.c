#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char x[] = "Happy Birthday to You";
	char y[25];
	char z[15];

	printf("The string in array x is %s\n", x);
	strcpy(y, x);
	printf("The string in array y is %s\n", y);
	strncpy(z, y, 14);		// does not copy null terminator
	z[14] = '\0';
	printf("The string in array z is %s\n", z);
	
	return 0;
}
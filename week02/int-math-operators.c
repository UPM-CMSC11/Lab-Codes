#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	printf("Enter value for x: ");
	scanf("%i", &x);

	int y;
	printf("Enter value for y: ");
	scanf("%i", &y);

	int sum = x + y;
	int diff = x - y;
	int prod = x * y;
	int quot = x / y;
	int mod = x %y;

	printf("%i + %i = %i\n", x, y, sum);
	printf("%i - %i = %i\n", x, y, diff);
	printf("%i * %i = %i\n", x, y, prod);
	printf("%i / %i = %i\n", x, y, quot);
	printf("%i %% %i = %i\n", x, y, mod);
	
	return 0;
}
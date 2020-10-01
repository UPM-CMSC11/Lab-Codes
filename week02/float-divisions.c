#include <stdio.h>

int main(int argc, char const *argv[])
{
	float x;
	printf("Enter a floating point number: ");
	scanf("%f", &x);

	float y;
	printf("Enter a floating point number: ");
	scanf("%f", &y);

	// performing floating point division
	float quotient = x / y;
	printf("%f divided by %f = %f\n", x, y, quotient);
	
	return 0;
}
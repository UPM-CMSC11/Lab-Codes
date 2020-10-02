#include <stdio.h>

int isPrime(int n)
{
	int isPrime = 1;
	for(int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("How many prime numbers do you want?: ");
	scanf("%i", &n);

	for(int i = 0, j = 2; i < n; j++)
	{
		if (isPrime(j))
		{
			printf("%i\n", j);
			i++;
		}
	}

	return 0;
}
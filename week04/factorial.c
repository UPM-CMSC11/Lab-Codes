#include <stdio.h>

int factorialIterative(int n)
{
	int factorial = 1;

	for(int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	return factorial;
}

int factorialRecursive(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorialRecursive(n - 1);
	}
}

int main(int argc, char const *argv[])
{
	for(int i = 0; i <= 10; i++)
	{
		printf("%5i! = %-7i (iterative), %-7i (recursive)\n", i, factorialIterative(i), factorialRecursive(i));
	}

	return 0;
}
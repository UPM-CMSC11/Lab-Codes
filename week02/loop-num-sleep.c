#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	for(int i = 1; i < 100; i = i * 2)
	{
		printf("%i\n", i);
		sleep(1);
	}

	return 0;
}
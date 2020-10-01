#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	printf("Size of int is %ld bytes\n", sizeof(int));
	for(int i = 1; ; i = i * 2)
	{
		printf("%u\n", i);
		sleep(1);
	}

	return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char response;

	do 
	{
		printf("Do you want to continue? (Y/N): ");
		scanf(" %c", &response);

	}while((response == 'y') || (response == 'Y'));

	return 0;
}
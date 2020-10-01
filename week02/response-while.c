#include <stdio.h>

int main(int argc, char const *argv[])
{
	char response = 'y';

	
	while((response == 'y') || (response == 'Y'))
	{		
		printf("Would you want to continue? (Y/N): ");
		scanf(" %c", &response);				
	}

	/*
	while((response == 'y') || (response == 'Y'))
	{
		printf("Would you want to continue? (Y/N): ");
		scanf("%c", &response);		
	}
	*/

	return 0;
}
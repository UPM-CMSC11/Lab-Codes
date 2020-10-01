#include <stdio.h>

int main(int argc, char const *argv[])
{
	char response;

	printf("Enter your response (Y for yes, N for no): ");
	scanf("%c", &response);

	if ((response == 'Y') || (response == 'y'))
	{
		printf("You entered yes!!!\n");
	}
	else if ((response == 'N') || (response == 'n'))
	{
		printf("You entered no???\n");
	}
	else
	{
		printf("Error in response! Please input Y or N!\n");
	}


	return 0;
}
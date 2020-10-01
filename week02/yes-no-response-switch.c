#include <stdio.h>

int main(int argc, char const *argv[])
{
	char response;

	printf("Enter your response (Y for yes, N for no): ");
	scanf("%c", &response);

	switch(response)
	{
		case 'Y':
		case 'y':
			printf("You entered yes!!!\n");
			break;
		case 'N':
		case 'n':
			printf("You entered no???\n");
			break;
		default:
			printf("Error in response! Please input Y or N!\n");
			break;
	}

	return 0;
}
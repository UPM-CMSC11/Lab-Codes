#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*****************************************
	 * Open CSV file in read mode
	 ****************************************/
	FILE *file = fopen("contacts.csv", "r");
	if (!file)
	{
		printf("Error in opening file\n");
		return 1;
	}

	char line[50];

	while(fscanf(file, "%[^\n]%*c", line) != EOF)
	{
		printf("%s\n", line);
	}

	// Close file
	fclose(file);
	
	return 0;
}
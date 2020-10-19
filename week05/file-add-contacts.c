#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*****************************************
	 * Open CSV file in append mode
	 ****************************************/
	FILE *file = fopen("contacts.csv", "a");
	if (!file)
	{
		printf("Error in opening file\n");
		return 1;
	}

	char name[50];
	char phoneNumber[15];
	printf("Name: ");
	scanf("%s", name);
	printf("Phone Number: ");
	scanf("%s", phoneNumber);

	// Print to file
	fprintf(file, "%s,%s\n", name, phoneNumber);

	// Close file
	fclose(file);
	
	return 0;
}
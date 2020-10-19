#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*****************************************
	 * Open CSV file
	 * If the file does not exist, it will be created
	 * If the file exists, it will be replaced with an empty one
	 * and all contents are destroyed!
	 ****************************************/
	FILE *file = fopen("contacts.csv", "w");
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
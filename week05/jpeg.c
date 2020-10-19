/************************************************
 * Checks if a file is a jpeg file
 ***********************************************/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Check usage
	if (argc != 2)
	{
		printf("Usage: ./jpeg file.jpg\n");
		return 1;
	}

	// Open file
	FILE *file = fopen(argv[1], "r");
	if (!file)
	{
		return 1;
	}

	// Read first three bytes
	unsigned char bytes[3];
	fread(bytes, 3, 1, file);

	// Check if first 3 bytes have the following values which all jpeg files should have
	if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
	{
		printf("Maybe\n");
	}
	else
	{
		printf("Definitely not jpeg!\n");
	}

	// Close file
	fclose(file);

	return 0;
}
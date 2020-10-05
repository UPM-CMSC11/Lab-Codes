#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define STRING_LENGTH	50

int main(int argc, char const *argv[])
{
	
	if (argc != 2)
	{
		printf("Usage: ./caesar k\n");
		return 1;
	}

	int key = atoi(argv[1]) % 26;

	char plaintext[STRING_LENGTH];
	printf("Plaintext: ");	
	scanf("%[^\n]%*c", plaintext);

	char ciphertext[STRING_LENGTH];
	for(int i = 0; i < strlen(plaintext); i++)
	{
		if(!isalpha(plaintext[i]))
		{
			ciphertext[i] = plaintext[i];
			continue;
		}

		int offset = isupper(plaintext[i]) ? 'A' : 'a';
		int plaintextCharIndex = plaintext[i] - offset;
		int ciphertextCharIndex = (plaintextCharIndex + key) % 26;
		char ciphertextChar = ciphertextCharIndex + offset;

		ciphertext[i] = ciphertextChar;
	}
	ciphertext[strlen(plaintext)] = '\0';

	printf("Ciphertext: %s\n", ciphertext);


	return 0;
}
#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE	100
#define MAX_STRING_SIZE	50

void quicksort(char a[][MAX_STRING_SIZE], int l, int r)
{
	if (l < r)
	{
		// pivot = l;
		int i = l;
		int j = r;

		while(i < j)
		{
			/*
			while(a[i] <= a[l] && i < r)
			{
				i++;
			}
			*/

			while(strcmp(a[i], a[l]) <= 0 && i < r)
			{
				i++;
			}

			/*
			while(a[j] > a[l])
			{
				j--;
			}
			*/

			while(strcmp(a[j], a[l]) >0)
			{
				j--;
			}

			if (i < j)
			{
				/*
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				*/

				char temp[MAX_STRING_SIZE];
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}

		/*
		int temp = a[l];
		a[l] = a[j];
		a[j] = temp;
		*/
		char temp[MAX_STRING_SIZE];
		strcpy(temp, a[l]);
		strcpy(a[l], a[j]);
		strcpy(a[j], temp);
		
		quicksort(a, l, j - 1);
		quicksort(a, j + 1, r);
	}
}


int main(int argc, char const *argv[])
{
	char words[ARRAY_SIZE][MAX_STRING_SIZE];

	int wordCount = 0;
	while(fgets(words[wordCount], MAX_STRING_SIZE, stdin) != NULL)	
	{
		sscanf(words[wordCount], "%[^\n]%*c", words[wordCount]);
		wordCount++;
	}

	printf("Before sorting:\n");
	for(int i = 0; i < wordCount; i++)
	{
		printf("%s\n", words[i]);
	}

	quicksort(words, 0, wordCount - 1);

	printf("\n\nAfter sorting:\n");
	for(int i = 0; i < wordCount; i++)
	{
		printf("%s\n", words[i]);
	}


	return 0;
}
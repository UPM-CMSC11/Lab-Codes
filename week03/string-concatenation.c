#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[20] = "Happy ";
	char s2[] = "New Year ";
	char s3[] = "";

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	strcat(s1, s2);
	printf("After strcat(s1, s2), s1 = %s\n", s1);

	// The following lines are dangerous
	strncat(s3, s1, 6);
	printf("After strncat(s3, s1, 6), s3 = %s\n", s3);
	strcat(s3, s1);
	printf("After strcat(s3, s1), s3 = %s\n", s3);
	return 0;
}
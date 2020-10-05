#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "four";
	char s3[] = "Manila";

	printf("The length of \"%s\" is %lu\n", s1, strlen(s1));
	printf("The length of \"%s\" is %lu\n", s2, strlen(s2));
	printf("The length of \"%s\" is %lu\n", s3, strlen(s3));

	return 0;
}
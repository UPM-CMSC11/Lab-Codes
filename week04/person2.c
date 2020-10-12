#include <stdio.h>
#include <string.h>

struct PersonInfo
{
	char lastName[20];
	char firstName[30];	
	int age;
};

/*
typedef struct PersonInfo
{
	char lastName[20];
	char firstName[30];	
	int age;
} PersonInfo;
*/

typedef struct PersonInfo PersonInfo;


int main(int argc, char const *argv[])
{
	PersonInfo p1;
	strcpy(p1.lastName, "Cruz");
	strcpy(p1.firstName, "Pedro");
	p1.age = 20;

	PersonInfo p2;
	strcpy(p2.lastName, "delos Santos");
	strcpy(p2.firstName, "Juan Paolo");	
	p2.age = 11;

	printf("%s, %s, %i\n", p1.lastName, p1.firstName, p1.age);
	printf("%s, %s, %i\n", p2.lastName, p2.firstName, p2.age);
	return 0;
}
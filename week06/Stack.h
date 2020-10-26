#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;			// define data as an int
	struct Node *nextPtr;	// Node pointer
} StackNode;

typedef StackNode* StackNodePtr;

void instructions();
void push(StackNodePtr*, int);
int pop(StackNodePtr*);
int isEmpty(StackNodePtr);
void printStack(StackNodePtr);
void freeStack(StackNodePtr*);
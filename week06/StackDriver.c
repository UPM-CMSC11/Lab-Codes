/**********************************************************************
 * A simple stack program
 *********************************************************************/
#include <stdio.h>
#include "Stack.h"

int main(int argc, char const *argv[])
{
	StackNodePtr stackPtr = NULL;    // points to stack top
    int choice;
    int item;

    instructions();
    printf("%s", "? ");
    scanf("%d", &choice);

    while(choice != 3)
    {
        switch(choice)
        {
            case 1:
                printf("%s", "Enter an integer: ");
                scanf("%d", &item);
                push(&stackPtr, item);        // insert item in list
                printStack(stackPtr);
                break;
            case 2:
                // If list is not empty
                if (!isEmpty(stackPtr))
                {
                    printf("The popped value is %d.\n", pop(&stackPtr));
                }

                printStack(stackPtr);
                break;
            default:
                puts("Invalid choice.\n");
                instructions();
                break;
        }

        printf("%s", "? ");
        scanf("%d", &choice);
    }

    if (stackPtr != NULL)
    {
    	freeStack(&stackPtr);
    }

	return 0;
}
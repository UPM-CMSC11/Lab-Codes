#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

/*******************************************************
 * Display instructions to user
 ******************************************************/
 void instructions()
 {
     puts("Enter your choice:\n"
          "    1 to push a value on the stack\n"
          "    2 to pop a value off the stack\n"
          "    3 to end program");
 }

 /******************************************************
  * Insert a node at the stack top
  * Parameter:
  *    topPtr - stack where the new data is to be pushed
  *    info - the data that will be pushed
  *****************************************************/
 void push(StackNodePtr *topPtr, int info)
 {
     StackNodePtr newPtr = malloc(sizeof(StackNode));

     // Insert the node at stack top
     if (newPtr != NULL)
     {
         newPtr->data = info;
         newPtr->nextPtr = *topPtr;
         *topPtr = newPtr;
     }
     else       // no space available
     {
         printf("%d not inserted. No memory available.\n", info);
     }
 }

/***************************************************************************
 * Remove a node from the stack top
 * Parameters:
 *    topPtr - stack where a node is to be popped
 * Return:
 *    value that is popped
 **************************************************************************/
int pop(StackNodePtr *topPtr)
{
    StackNodePtr tempPtr = *topPtr;
    int popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);
    return popValue;
}

/******************************************************************
 * Checks if the stack is empty
 * Parameter:
 *  sPtr - list that will be checked if empty
 * Return:
 *   1 if the list is empty, 0 otherwise
 *****************************************************************/
 int isEmpty(StackNodePtr sPtr)
 {
     return sPtr == NULL;
 }

/******************************************************************
 * Print the stack
 * Parameter:
 *  currentPtr - stack whose contents is to be printed
 *****************************************************************/
 void printStack(StackNodePtr currentPtr)
 {
     // If stack is empty
     if(currentPtr == NULL)
     {
         puts("The stack is empty.\n");
     }
     else
     {
         puts("The stack is:");

         // while not the end of the list
         while(currentPtr != NULL)
         {
             printf("%d --> ", currentPtr->data);
             currentPtr = currentPtr->nextPtr;
         }

         puts("NULL\n");
     }
 }

/******************************************************************
 * Free all the nodes of the stack
 * Parameter:
 *   currentPtr - stack whose nodes are to be freed
 *****************************************************************/
 void freeStack(StackNodePtr *sPtr)
 {
    StackNodePtr currentPtr = *sPtr;

    while(*sPtr != NULL)
    {
        currentPtr = (*sPtr)->nextPtr;
        free(*sPtr);
        *sPtr = currentPtr;
    }
 }
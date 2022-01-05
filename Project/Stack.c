//Thi Huong Tra Le
//PROG71985F20
//Assignment 5 Refactor 
//Fall 2020

//Feedback from Assignment 5:
//--Use local variables over global/extern variables wherever possible. (-2pts)
//--your stack ADT should only contain items related to stack(eg: push, pop)

#include "Stack.h"

PSTACK createStack()
{
	PSTACK newStack = (PSTACK)malloc(sizeof(STACK));
	newStack->top = HEAD;
	return newStack;
}

void push(PSTACK stack, char letter)
{
	stack->word[(++stack->top)]= letter;
}

char pop(PSTACK stack)
{
	if ((stack->top) != HEAD)		//if the stack is not empty, pop the value. Otherwise, return 0
	{
		char result;
		result = stack->word[(stack->top)];
		(stack->top)--;
		return result;
	}
	else
		return 0;

}

void disposeStack(PSTACK stack)
{
	free(stack);
}
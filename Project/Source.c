//Thi Huong Tra Le
//PROG71985F20
//Assignment 5 Refactor 
//Fall 2020

//Feedback from Assignment 5:
//--Use local variables over global/extern variables wherever possible. (-2pts)
//--your stack ADT should only contain items related to stack(eg: push, pop)

#define _CRT_SECURE_NO_WARNINGS
#include "Stack.h"
#include <stdio.h>

#define MAXINPUT	80

int main(void)
{
	STACK* stack = createStack();

	char inputBuffer[MAXINPUT];
	printf("enter a word: ");
	scanf("%[^\n]s", &inputBuffer);

	int i = 0;
	while (inputBuffer[i] != '\0')
		push(stack, inputBuffer[i++]);

	char ch;
	while (ch = pop(stack))
		printf("%c", ch);

	printf("\n");

	disposeStack(stack);

	return 0;
}